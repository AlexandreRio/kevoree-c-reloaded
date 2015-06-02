#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define ALPHABET_SIZE 192

//TODO sort the array
char *code_attr[ALPHABET_SIZE][2] =
{
{"version","q"},
{"values","z"},
{"value","f"},
{"url","e"},
{"UDPGroup","h"},
{"type","P"},
{"typeDefinition","u"},
{"typeDefinitions","`"},
{"true","n"},
{"time","["},
{"superTypes","i"},
{"subTypes","T"},
{"subNodes","P"},
{"string","b"},
{"state","l"},
{"started","v"},
{"sieve","q"},
{"sensing","x"},
{"requiredLibs","q"},
{"required","F"},
{"repositories","m"},
{"QoMNUckL","aa"},
{"provided","S"},
{"port","Y"},
{"path","W"},
{"oW3cS6Ts","r"},
{"org.kevoree.TypeLibrary","]"},
{"org.kevoree.Repository","O"},
{"org.kevoree.NodeType","i"},
{"org.kevoree.NetworkProperty","b"},
{"org.kevoree.NetworkInfo","_"},
{"org.kevoree.library.c","a"},
{"org.kevoree.Group","V"},
{"org.kevoree.GroupType","j"},
{"org.kevoree.FragmentDictionary","C"},
{"org.kevoree.Dictionary","Y"},
{"org.kevoree.DictionaryValue","i"},
{"org.kevoree.DictionaryType","O"},
{"org.kevoree.DictionaryAttribute","K"},
{"org.kevoree.DeployUnit","F"},
{"org.kevoree.ContainerRoot","]"},
{"org.kevoree.ContainerNode","f"},
{"org.kevoree.ComponentType","p"},
{"org.kevoree.ComponentInstance","C"},
{"optional","s"},
{"number","aa"},
{"nodes","h"},
{"nodeNetworks","`"},
{"node0","N"},
{"networkInformation","g"},
{"nb870","y"},
{"nb772","e"},
{"nb771","g"},
{"namespace","A"},
{"name","p"},
{"na871","b"},
{"na573","A"},
{"na289","U"},
{"n9989","c"},
{"n9877","X"},
{"n9073","e"},
{"n8773","T"},
{"n3554","b"},
{"n2650","a"},
{"n2459","`"},
{"n2251","i"},
{"n2152","G"},
{"n2151","H"},
{"n1759","E"},
{"n1559","J"},
{"n1459","o"},
{"n1455","p"},
{"metaData","D"},
{"mBindings","c"},
{"lx9877","["},
{"lx3554","f"},
{"lx2152","I"},
{"lx1459","q"},
{"lo","n"},
{"local","k"},
{"libraries","m"},
{"ip","S"},
{"int","j"},
{"Inti","D"},
{"interval","o"},
{"hytCmvXU","H"},
{"hwb870","s"},
{"hwb772","["},
{"hwb771","^"},
{"hwa289","w"},
{"hw9989","Z"},
{"hw8773","G"},
{"hw2650","G"},
{"hw2251","N"},
{"hw1559","B"},
{"hubs","w"},
{"host","w"},
{"hosts","M"},
{"hashcode","k"},
{"groups","Q"},
{"groupName","h"},
{"group0","n"},
{"genericTypes","e"},
{"front","V"},
{"fragmentDictionary","g"},
{"fragmentDependant","L"},
{"false","s"},
{"factoryBean","t"},
{"eClass","W"},
{"dictionaryType","a"},
{"dictionary","h"},
{"deployUnit","U"},
{"deployUnits","I"},
{"defaultValue","j"},
{"Default","B"},
{"dataTypes","R"},
{"datatype","k"},
{"CtHbJw37","d"},
{"count","o"},
{"ContikiNode","U"},
{"ContikiLib","E"},
{"components","j"},
{"comp457","p"},
{"CoAPGroup","K"},
{"ce","u"},
{"BXX5q3eV","t"},
{"blink","x"},
{"bka871","a"},
{"bka573","R"},
{"bk9073","v"},
{"bk2459","r"},
{"bk2151","X"},
{"bk1759","aa"},
{"bk1455","F"},
{"bean","m"},
{"attributes","l"},
{"afOM93SD","m"},
{"abstract","f"},
{"9o86ZdvQ","v"},
{"6","R"},
{"5","T"},
{"3dddTFpd","V"},
{"20000","Q"},
{"18000","W"},
{"1234","_"},
{"100","g"},
{"1000","H"},
{"0","X"},
{"0qE5TygS","I"},
{"0.98144014482386411432124448068","O"},
{"0.96873560803942381432124721324","x"},
{"0.96605161810293791432123715642","A"},
{"0.96535480115562681432124871253","M"},
{"0.93829955207183961432123899340","y"},
{"0.93384177354164421432124102077","]"},
{"0.92470887908712031432124815954","E"},
{"0.90601870790123941432123946266","_"},
{"0.85399847291409971432123883565","L"},
{"0.82558026234619321432125237187","l"},
{"0.75130812753923241432125161541","t"},
{"0.73711027111858131432123794332","d"},
{"0.71672565443441271432124688330","L"},
{"0.71556304884143171432124953253","u"},
{"0.71419032104313371432124762480","S"},
{"0.70933706359937791432123833544","P"},
{"0.70674828044138851432123848469","r"},
{"0.68661252455785871432124536416","J"},
{"0.68263587262481451424775426644","Y"},
{"0.65135152544826271432124390045","Z"},
{"0.56672404310666021432123659775","^"},
{"0.55784740601666271432124376455","d"},
{"0.55506877251900731432124571610","B"},
{"0.54490464390255511432124999589","Q"},
{"0.53797553176991641432124283059","N"},
{"0.530610746005551432124082140","J"},
{"0.51902025728486481432124611813","r"},
{"0.478929068660363551432125174141","o"},
{"0.44028098252601921432122800473","D"},
{"0.40597744332626461432124065761","z"},
{"0.39251068630255761432124317104","M"},
{"0.39016547030769291432124216946","^"},
{"0.280824760207906371432123339315","l"},
{"0.26062655518762771432122795371","z"},
{"0.25617986987344921432125299046","Z"},
{"0.244668840663507581432123271370","K"},
{"0.133597850101068621432123764697","k"},
{"0.125406553270295261432123361237","n"},
{"0.123657654505223041432124851613","c"},
{"0.103688640287145971432125140977","d"},
{"0.0915601672604681432124195820","c"},
{"0.084562670206651091432125029664","y"},
{"0.0.1","C"},
};

char* getSubsituteCode(char* code)
{
  int i;
  for (i=0; i<ALPHABET_SIZE; i++)
  {
    if (strcmp(code, code_attr[i][0]) == 0) {
      return code_attr[i][1];
    }
  }
  return code;
}

void compress(FILE* fp)
{
  char c, attr[100];
  int index = 0;
  bool in_attribute = false;

  while ((c=fgetc(fp)) != EOF)
  {
    // begining of an attributae name
    if (c =='"' && !in_attribute)
    {
      in_attribute = true;
    }
    // end of an attribute name
    else if (c == '"' && in_attribute)
    {
      in_attribute = false;
      attr[index] = '\0';
      index = 0; //reset attribute index
      printf("\"%s\"", getSubsituteCode(attr));
    }
    // inside an attribute
    else if (c != '"' && in_attribute)
    {
      attr[index] = c;
      index++;
    }
    else
    {
      printf("%c", c);
    }
  }
}

void decompress(FILE* fp)
{
}

int main(void)
{
  FILE *fp = fopen("../models/7nodes1component-compact.json", "r");
  compress(fp);
  fclose(fp);
  return 0;
}
