using UnityEngine;
using UnityEngine.SceneManagement;

[RequireComponent(typeof(AudioSource))]
public class SoundtrackManager : MonoBehaviour {

    [SerializeField]
    private AudioClip[] playlistMenu, playlistGameplay;

    public AudioSource emissor;

    private void Awake()
    {
        emissor = GetComponent<AudioSource>();

        GameObject[] objs = GameObject.FindGameObjectsWithTag("music");
        if (objs.Length > 1)
        {
            Destroy(this.gameObject);
        }
        DontDestroyOnLoad(this.gameObject);
    }

    void OnEnable()
    {
        SceneManager.sceneLoaded += OnSceneLoaded;
    }

    int RetornarAleatorio(int qtd)
    {
        return Random.Range(0, qtd);
    }

    void TocarMusicaAleatoriaMenu()
    {
        emissor.clip = playlistMenu[RetornarAleatorio(playlistMenu.Length)];
        emissor.Play();
        Invoke("TocarMusicaAleatoriaMenu", emissor.clip.length);
    }

    void TocarMusicaAleatoriaGameplay()
    {
        emissor.clip = playlistGameplay[RetornarAleatorio(playlistGameplay.Length)];
        emissor.Play();
        Invoke("TocarMusicaAleatoriaGameplay" , emissor.clip.length);
    }

    void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        CancelInvoke();
        if (scene.name == "Main")
        {
            TocarMusicaAleatoriaMenu();
        }
        else
        {
            TocarMusicaAleatoriaGameplay();
        }
    }
}
