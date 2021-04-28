using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class InitialLoader : MonoBehaviour
{
    [SerializeField]
    private Image slLoader;

    [SerializeField]
    private Text txtPorcent;

    [SerializeField]
    private string sceneToLoad = "Main";

    private void Awake()
    {
#if UNITY_EDITOR
        Debug.unityLogger.logEnabled = true;
#else
        Debug.unityLogger.logEnabled = false;
#endif
    }

    string Porcent(float progress) => (progress * 100f).ToString("F2") + "% ";
    float ProgressClamped(float progress) => Mathf.Clamp01(progress / .9f);

    void Start()
    {
        StartCoroutine(LoadScene());
    }

    IEnumerator LoadScene()
    {
        yield return new WaitForSeconds(1f);

        AsyncOperation opperation = SceneManager.LoadSceneAsync(sceneToLoad);

        while (!opperation.isDone)
        {
            float progress = ProgressClamped(opperation.progress);

            txtPorcent.text = Porcent(progress);
            slLoader.fillAmount = progress;
            yield return null;
        }
    }
}
