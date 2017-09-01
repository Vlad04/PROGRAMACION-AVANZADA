typedef struct dictElement {
	char *key;
	void *value;
}DictElement;

typedef struct dict{

	DictElement *elements;
	unsigned int size;
}Dict;

Dict * initDictionary(unsigned int, int *);
void upserDictionary(Dict *dictionary, char *key, void *value, int *);

