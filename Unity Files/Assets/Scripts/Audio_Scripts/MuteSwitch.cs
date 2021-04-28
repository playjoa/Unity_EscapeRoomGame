using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MuteSwitch : MonoBehaviour {

    [SerializeField]
    private Image imgFXSound, imgMusic;

    [SerializeField]
    private Sprite[] sprFX, sprMusic;

    //Public static
    public static bool isFXMuted = false, isMusicMute = false;

    private void OnEnable()
    {
        isFXMuted = DevolverBoolMemoria("fxMuted");
        isMusicMute = DevolverBoolMemoria("musicMuted");

        AtualizarSpriteSwap();
        FazerEfeitoNaMusica();
    }

    void NovoValorBoolMemoria(string id, bool valor) 
    {
        if (!valor)
            PlayerPrefs.SetInt(id, 0);
        else
            PlayerPrefs.SetInt(id, 1);
    }

    bool DevolverBoolMemoria(string id)
    {
        if (PlayerPrefs.GetInt(id) == 0)
            return false;
        else
            return true;
    }

    void AtualizarSpriteSwap()
    {
        if (isFXMuted)
            imgFXSound.sprite = sprFX[1];
        else
            imgFXSound.sprite = sprFX[0];

        if (isMusicMute)
            imgMusic.sprite = sprMusic[1];
        else
            imgMusic.sprite = sprMusic[0];
    }
    public void MuteFX()
    {
        isFXMuted = !isFXMuted;
        
        NovoValorBoolMemoria("fxMuted", isFXMuted);

        AtualizarSpriteSwap();
    }

    void FazerEfeitoNaMusica() 
    {
        try
        {
            GameObject music = GameObject.FindGameObjectWithTag("music");
            AudioSource musica = music.GetComponent<AudioSource>();

            if (isMusicMute)
                musica.volume = 0;
            else
                musica.volume = 0.45f;
        }
        catch { Debug.Log("Soundtrack nao encontrada!");  }
    }

    public void MuteMusic()
    {
        isMusicMute = !isMusicMute;

        NovoValorBoolMemoria("musicMuted", isMusicMute);

        AtualizarSpriteSwap();

        FazerEfeitoNaMusica();
    }
}
