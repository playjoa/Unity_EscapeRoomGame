using UnityEngine.UI;
using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class LoadSceneWithLoadingBar : MonoBehaviour
{
    [SerializeField]
    private GameObject crdLoader;

    [SerializeField]
    private Image slLoader;

    [SerializeField]
    private Text txtPorcent;

    [SerializeField]
    private string sceneToLoad = "Game";

    string Porcent(float progress) => (progress * 100f).ToString("F2") + "% ";
    float ProgressClamped(float progress) => Mathf.Clamp01(progress / .9f);

    public void ClickLoadScene()
    {
        crdLoader.SetActive(true);

        StartCoroutine(LoadScene());
    }

    IEnumerator LoadScene()
    {
        yield return new WaitForSeconds(1.5f);

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
