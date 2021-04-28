using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(AudioSource))]
public class SoundManager : MonoBehaviour {

    [System.Serializable]
    public class SoundFX
    {
        public string idSom = "click";
        public AudioClip[] clips;

        //Devolver som aleatorio dentro da lista
        public AudioClip RandomSound() 
        {
            return clips[Random.Range(0, clips.Length)];
        }
    }

    [SerializeField]
    private List<SoundFX> sounds;

    [SerializeField]
    private AudioSource normalEmissor;

    //Public Static
    public static Dictionary<string, SoundFX> listaSons;
    public static AudioSource storedNormalEmissor;

    private void Awake()
    {
        PassarValoresSons();
        IniciarDicionario();
    }

    void IniciarDicionario()
    {
        listaSons = new Dictionary<string, SoundFX>();

        foreach (SoundFX s in sounds)
            listaSons.Add(s.idSom, s);
    }

   void PassarValoresSons() 
   {
        storedNormalEmissor = normalEmissor;
   }

    #region UI STUFF
    public void ClickUI()
    {
        PlaySoundInList("click", 1);
    }

    public void BackUI()
    {
        PlaySoundInList("back", 1);
    }

    public void PlayASound(string idSound)
    {
        PlaySoundInList(idSound, 1);
    }
    #endregion

    public static void PlaySoundInList(string id, float volume)
    {
        if (MuteSwitch.isFXMuted)
            return;

        if (!listaSons.ContainsKey(id))
        {
            Debug.LogWarning("Não existe SOM COM TAG: " + id);
            return;
        }

        try
        {
            storedNormalEmissor.PlayOneShot(listaSons[id].RandomSound(), volume);
        }
        catch { }
    }
}
