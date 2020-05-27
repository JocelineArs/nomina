#include <iostream>

int main() {
	int op;
	printf("\nArias Joceline\n");
	printf("\nSistema de Nomina\n");
	printf("\n1. Facturas\n");
	printf("\n2. Control de Inventario\n");
	printf("\n3. Cuentas por cobrar\n");
	printf("\n4. Cuentas por pagar\n");
	printf("\n5. Cotizaciones\n");
	printf("\n6. Nomina de Pago\n");
	printf("\n7. Recursos Humanos\n");
	printf("\n8. Ordenes de compra\n");
	printf("\n9. Catalogo de compras\n");
	printf("\n10. Salir\n");
	scanf("%d,&op");
	switch(op)
	{
		case 1:
			printf("\nFacturas");
			printf("Ingresa tu nombre y tu clave\n");
			scanf("%d,clave");
			break;
		case 2:
			printf("\nControl de Inventario");
			printf("Ingresa tu nombre y tu clave\n");
			scanf("%d,clave");
			break;
	    case  3 :
            printf ("Cuentas por cobrar\n");
            break ;
        case  4 :
            printf ("Cuentas por pagar\n");
            break ;
        case  5 :
            printf ("Cotizaciones \n");
            break ;
        case  6 :
            printf ("Nomina de pago\n");
            break ;
        case  7 :
            printf ("Recursos humanos\n");
        case  8 :
        	 printf ("Órdenes de compras\n");
            break ;
        case  9 :
            printf("\nCatalogo de compras\n");
            break;
        case 10:
            printf ("Salir\n");
            break ;
            default :
            printf ("OPCION INVALIDA\n");

	}
	
	return 0;
}
