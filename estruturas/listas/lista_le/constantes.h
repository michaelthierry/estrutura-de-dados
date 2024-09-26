/**
 * @file constantes.h
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief Constantes utilizadas
 * @version 0.1
 * @date 2024-09-14
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/*Constantes */
#define MAX 10

// efeitos
#define NONE        "\033[0m"
#define BOLD        "\033[1m"
#define HALF        "\033[2m"
#define UNDERSCORE  "\033[4m"
#define BLINK       "\033[5m"
#define REVERSE     "\033[7m"


// cores
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"

// Amarelo em bold
#define BY  BOLD YELLOW
#define BR  BOLD RED
#define BG  BOLD GREEN

// especial efeitos
#define BYR BY REVERSE
#define Z "\\"

