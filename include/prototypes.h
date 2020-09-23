// NOTA: sustituir <abreviatura> por la abreviatura correspondiente: avl (AVL)
// para AVL tree, o rbt (RBT) para Red Black Tree.

/**
 * Códigos de error
 */
enum <abreviatura>_error_codes {
  <ABREVIATURA>_SUCCESS       = 0,
  <ABREVIATURA>_INVALID_PARAM = -1,
  <ABREVIATURA>_OUT_OF_RANGE  = -2,
  <ABREVIATURA>_TIMEOUT       = -3,
  <ABREVIATURA>_NOT_FOUND     = -4,
  <ABREVIATURA>_REAL	      = -5
 JKAJAJAAKKAKSDLD;DD = -9
  // Pueden añadir más
};

/**
 * Struct que define un nodo de la estructura de datos
 */
struct <abreviatura>_node {
  /** Puntero al nodo hijo izquierdo */
  struct <abreviatura>_node *lc_node;

  /** Puntero al nodo hijo derecho */
  struct <abreviatura>_node *rc_node;

  /** Número flotante asociado al nodo */
  float value;

  // Pueden añadir más datos
};


/**
 * <abreviatura>_create
 * Toma una lista de números flotantes, y crea la estructura de datos deseada.
 * Retorna el nodo raíz del árbol.
 *
 * @param [in]  in_number_list es la lista de números flotantes de entrada
 * @param [out] new_root_node  es el puntero al nodo raíz del árbol creado
 *
 * @returns error_code         un código de error indicando el éxito o error
 *                             de la función
 */
int <abreviatura>_create(
  float                     *in_number_list,
  struct <abreviatura>_node *new_root_node);


/**
 * <abreviatura>_node_add
 * Toma un nodo y lo inserta en la estructura de datos.
 * Una nueva raíz puede ser obtenida.
 *
 * @param [in]  in_root   es el nodo raíz original del árbol
 * @param [in]  new_node  es el nodo con el número flotante por insertar
 * @param [out] new_root  es el puntero al nuevo nodo raíz del árbol
 *
 * @returns error_code    un código de error indicando el éxito o error
 *                        de la función
 */
int <abreviatura>_node_add(
  struct <abreviatura>_node  in_root,
  struct <abreviatura>_node  new_node,
  struct <abreviatura>_node *new_root);


/**
 * <abreviatura>_node_remove
 * Toma un nodo arbitrario, lo busca y lo elimina de la estructura de datos.
 * Da error si el nodo no pertenece al árbol.
 *
 * @param [in]  in_root        es el nodo raíz original del árbol
 * @param [in]  node_to_remove es el nodo por eliminar
 * @param [out] new_root       es el puntero al nuevo nodo raíz del árbol
 *
 * @returns error_code         un código de error indicando el éxito o error
 *                             de la función
 */
int <abreviatura>_node_remove(
  struct <abreviatura>_node  in_root,
  struct <abreviatura>_node  node_to_remove,
  struct <abreviatura>_node *new_root);


/**
 * <abreviatura>_search
 * Toma un número flotante, lo busca y se devuelve el nodo al que pertenece.
 * Si existieran varios nodos con el mismo valor, se devuelve cualquiera.
 * Da error si el valor no existe en ningún nodo.
 *
 * @param [in]  in_root        es el nodo raíz original del árbol
 * @param [in]  num            es el número flotante por buscar
 * @param [out] found_node     es el nodo encontrado que contiene el valor
 *
 * @returns error_code         un código de error indicando el éxito o error
 *                             de la función
 */
int <abreviatura>_search(
  struct <abreviatura>_node  in_root,
  float                      num,
  struct <abreviatura>_node *found_node);


/**
 * <abreviatura>_max_get
 * Se obtiene el nodo que contenga el valor máximo en todo el árbol.
 *
 * @param [in]  in_root   es el nodo raíz original del árbol
 * @param [out] max_node  es el nodo encontrado que contiene el valor máximo
 *
 * @returns error_code    un código de error indicando el éxito o error
 *                        de la función
 */
int <abreviatura>_max_get(
  struct <abreviatura>_node  in_root,
  struct <abreviatura>_node *max_node);


/**
 * <abreviatura>_min_get
 * Se obtiene el nodo que contenga el valor mínimo en todo el árbol.
 *
 * @param [in]  in_root   es el nodo raíz original del árbol
 * @param [out] min_node  es el nodo encontrado que contiene el valor mínimo
 *
 * @returns error_code    un código de error indicando el éxito o error
 *                        de la función
 */
int <abreviatura>_min_get(
  struct <abreviatura>_node  in_root,
  struct <abreviatura>_node *min_node);


/**
 * <abreviatura>_print
 * Se imprime el árbol en terminal.
 *
 * @param [in]  in_root   es el nodo raíz original del árbol
 *
 * @returns error_code    un código de error indicando el éxito o error
 *                        de la función
 */
int <abreviatura>_print(
  struct <abreviatura>_node  in_root);
