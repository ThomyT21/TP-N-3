/** \brief Desde un archivo data.csv (modo texto) parsea los datos
 *
 * \param pFile FILE* Nombre del archivo
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromText(FILE* pFile , LinkedList* pArrayListEmployee);

/** \brief Desde un archivo data.bin (modo binario) parsea los datos
 *
 * \param pFile FILE*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromBinary(FILE* pFile , LinkedList* pArrayListEmployee);
