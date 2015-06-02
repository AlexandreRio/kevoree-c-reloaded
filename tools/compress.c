#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define ALPHABET_SIZE 192

//TODO sort the array
char *code_attr[ALPHABET_SIZE][2] =
{
{"version","c"},
{"values","ci"},
{"value","ae"},
{"url","e3"},
{"UDPGroup","ag"},
{"typeDefinitions","bt"},
{"typeDefinition","at"},
{"type","bd"},
{"true","b7"},
{"time","c9"},
{"superTypes","b2"},
{"subTypes","bh"},
{"subNodes","ei"},
{"string","aa"},
{"state","dp"},
{"started","au"},
{"sieve","ap"},
{"sensing","d1"},
{"requiredLibs","fe"},
{"required","co"},
{"repositories","fa"},
{"QoMNUckL","eu"},
{"provided","el"},
{"port","bm"},
{"path","bk"},
{"oW3cS6Ts","aq"},
{"org.kevoree.TypeLibrary","ev"},
{"org.kevoree.Repository","cx"},
{"org.kevoree.NodeType","ah"},
{"org.kevoree.NetworkProperty","bv"},
{"org.kevoree.NetworkInfo","dc"},
{"org.kevoree.library.c","de"},
{"org.kevoree.GroupType","dn"},
{"org.kevoree.Group","c4"},
{"org.kevoree.FragmentDictionary","d6"},
{"org.kevoree.DictionaryValue","dm"},
{"org.kevoree.DictionaryType","bc"},
{"org.kevoree.Dictionary","er"},
{"org.kevoree.DictionaryAttribute","ct"},
{"org.kevoree.DeployUnit","a4"},
{"org.kevoree.ContainerRoot","bq"},
{"org.kevoree.ContainerNode","bz"},
{"org.kevoree.ComponentType","ao"},
{"org.kevoree.ComponentInstance","cl"},
{"optional","ar"},
{"number","d"},
{"nodes","dl"},
{"nodeNetworks","dd"},
{"node0","eg"},
{"networkInformation","e5"},
{"nb870","ax"},
{"nb772","di"},
{"nb771","dk"},
{"namespace","d4"},
{"name","b9"},
{"na871","e0"},
{"na573","cj"},
{"na289","en"},
{"n9989","dg"},
{"n9877","bl"},
{"n9073","by"},
{"n8773","c2"},
{"n3554","df"},
{"n2650","ez"},
{"n2459","ey"},
{"n2251","e7"},
{"n2152","cp"},
{"n2151","cq"},
{"n1759","a3"},
{"n1559","a8"},
{"n1459","ds"},
{"n1455","dt"},
{"metaData","d7"},
{"mBindings","bw"},
{"lx9877","bo"},
{"lx3554","dj"},
{"lx2152","cr"},
{"lx1459","du"},
{"lo","fb"},
{"local","aj"},
{"libraries","b6"},
{"ip","bg"},
{"Inti","a2"},
{"interval","fc"},
{"int","b3"},
{"hytCmvXU","ea"},
{"hwb870","cb"},
{"hwb772","et"},
{"hwb771","ew"},
{"hwa289","av"},
{"hw9989","es"},
{"hw8773","e"},
{"hw2650","a5"},
{"hw2251","bb"},
{"hw1559","ck"},
{"hubs","d0"},
{"hosts","cv"},
{"host","cf"},
{"hashcode","e9"},
{"groups","cz"},
{"groupName","b1"},
{"group0","dr"},
{"genericTypes","ad"},
{"front","bj"},
{"fragmentDictionary","b0"},
{"fragmentDependant","ee"},
{"false","dw"},
{"factoryBean","as"},
{"eClass","c5"},
{"dictionaryType","bu"},
{"dictionary","e6"},
{"deployUnits","a7"},
{"deployUnit","bi"},
{"defaultValue","e8"},
{"Default","a0"},
{"dataTypes","bf"},
{"datatype","do"},
{"CtHbJw37","dh"},
{"count","b8"},
{"ContikiNode","c3"},
{"ContikiLib","cn"},
{"components","ai"},
{"comp457","fd"},
{"CoAPGroup","ed"},
{"ce","dy"},
{"BXX5q3eV","dx"},
{"blink","aw"},
{"bka871","a"},
{"bka573","c0"},
{"bk9073","ce"},
{"bk2459","ff"},
{"bk2151","c6"},
{"bk1759","bp"},
{"bk1455","d9"},
{"bean","dq"},
{"attributes","f"},
{"afOM93SD","al"},
{"abstract","e4"},
{"9o86ZdvQ","dz"},
{"6","ek"},
{"5","em"},
{"3dddTFpd","eo"},
{"20000","ej"},
{"18000","ep"},
{"1234","ex"},
{"100","af"},
{"1000","a6"},
{"0qE5TygS","eb"},
{"0","eq"},
{"0.98144014482386411432124448068","eh"},
{"0.96873560803942381432124721324","cg"},
{"0.96605161810293791432123715642","az"},
{"0.96535480115562681432124871253","ef"},
{"0.93829955207183961432123899340","d2"},
{"0.93384177354164421432124102077","da"},
{"0.92470887908712031432124815954","d8"},
{"0.90601870790123941432123946266","bs"},
{"0.85399847291409971432123883565","cu"},
{"0.82558026234619321432125237187","b5"},
{"0.75130812753923241432125161541","cc"},
{"0.73711027111858131432123794332","bx"},
{"0.71672565443441271432124688330","b"},
{"0.71556304884143171432124953253","cd"},
{"0.71419032104313371432124762480","c1"},
{"0.70933706359937791432123833544","cy"},
{"0.70674828044138851432123848469","ca"},
{"0.68661252455785871432124536416","ec"},
{"0.68263587262481451424775426644","c7"},
{"0.65135152544826271432124390045","bn"},
{"0.56672404310666021432123659775","db"},
{"0.55784740601666271432124376455","e2"},
{"0.55506877251900731432124571610","d5"},
{"0.54490464390255511432124999589","be"},
{"0.53797553176991641432124283059","cw"},
{"0.530610746005551432124082140","cs"},
{"0.51902025728486481432124611813","dv"},
{"0.478929068660363551432125174141","an"},
{"0.44028098252601921432122800473","cm"},
{"0.40597744332626461432124065761","ay"},
{"0.39251068630255761432124317104","ba"},
{"0.39016547030769291432124216946","br"},
{"0.280824760207906371432123339315","ak"},
{"0.26062655518762771432122795371","d3"},
{"0.25617986987344921432125299046","c8"},
{"0.244668840663507581432123271370","a9"},
{"0.133597850101068621432123764697","b4"},
{"0.125406553270295261432123361237","am"},
{"0.123657654505223041432124851613","ab"},
{"0.103688640287145971432125140977","ac"},
{"0.0915601672604681432124195820","e1"},
{"0.084562670206651091432125029664","ch"},
{"0.0.1","a1"}
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

char* getAttributeCode(char* code)
{
  int i;
  for (i=0; i<ALPHABET_SIZE; i++)
  {
    if (strcmp(code, code_attr[i][1]) == 0) {
      return code_attr[i][0];
    }
  }
  return code;
}

void compress(FILE* fp, bool reverse)
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
      if (reverse)
	printf("\"%s\"", getAttributeCode(attr));
      else
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
  //FILE *fp = fopen("../models/7nodes1component.json", "r");
  FILE *fp = fopen("7nodes.compact", "r");
  compress(fp, true);
  fclose(fp);
  return 0;
}
