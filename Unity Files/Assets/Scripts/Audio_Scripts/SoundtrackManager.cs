using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

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

    //Buscar musica aleatoria dentro da playlist de menu
    void TocarMusicaAleatoriaMenu()
    {
        emissor.clip = playlistMenu[RetornarAleatorio(playlistMenu.Length)];
        emissor.Play();
        Invoke("TocarMusicaAleatoriaMenu", emissor.clip.length);
    }

    //Buscar musica aleatoria dentro da playlist de gameplay
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
