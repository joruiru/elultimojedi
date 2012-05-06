Include "Gipi.h";
[ ZIPI_Intro ; 
  print "Desplázate con las flechas del cursor. Pulsa ~Entrar~ para seleccionar, ~P~ para continuar, o ~Q~ para salir. ";
!  print "[Pulsa 'T' para ejecutar en modo texto (las teclas no funcionarán)]^";
!  print "[o cualquier otra tecla para ejecutar en modo menu manejado por teclas]^";
!  ZIPI_modo=0;
!  tecla=ZIPI_tecla();  if (tecla=='T' or 't') ZIPI_modo=1;
];

ZIPI_Menu ZIPI_Menu0
with
  ZIPI_titulo "Sistema de pistas interactivas",
  ZIPI_item
    ZIPI_Menu1
    ZIPI_Otro7
    ZIPI_Menu2
    ZIPI_Menu3
    ZIPI_Menu5
    ZIPI_Otro8
    ZIPI_Menu6
    ZIPI_Otro10
    ZIPI_Menu7
;
ZIPI_Menu ZIPI_Menu1
with
  ZIPI_titulo "Información general - Lee esto primero",
  ZIPI_item
    ZIPI_Otro0
    ZIPI_Otro1
    ZIPI_Otro2
    ZIPI_Otro3
    ZIPI_Otro4
    ZIPI_Otro5
    ZIPI_Otro6
;
ZIPI_Menu ZIPI_Menu2
with
  ZIPI_titulo "En el paso de Half-Axe",
  ZIPI_item
    ZIPI_Pista0
    ZIPI_Pista1
    ZIPI_Pista2
;
ZIPI_Menu ZIPI_Menu3
with
  ZIPI_titulo "En Cadgel Meadows",
  ZIPI_item
    ZIPI_Pista3
    ZIPI_Pista4
    ZIPI_Menu4
;
ZIPI_Menu ZIPI_Menu4
with
  ZIPI_titulo "¿Cómo avanzo en la investigación?",
  ZIPI_item
    ZIPI_Pista5
    ZIPI_Pista6
    ZIPI_Pista7
    ZIPI_Pista8
;
ZIPI_Menu ZIPI_Menu5
with
  ZIPI_titulo "Escapando de Cadgel Meadows",
  ZIPI_item
    ZIPI_Pista9
    ZIPI_Pista10
    ZIPI_Pista11
    ZIPI_Pista12
;
ZIPI_Menu ZIPI_Menu6
with
  ZIPI_titulo "La FUERZA",
  ZIPI_item
    ZIPI_Otro9
;
ZIPI_Menu ZIPI_Menu7
with
  ZIPI_titulo "Información adicional (mapas y solución)",
  ZIPI_item
    ZIPI_Menu8
    ZIPI_Otro14
    ZIPI_Menu10
;
ZIPI_Menu ZIPI_Menu8
with
  ZIPI_titulo "Mapas (sólo para casos de extrema necesidad)",
  ZIPI_item
    ZIPI_Otro11
    ZIPI_Menu9
;
ZIPI_Menu ZIPI_Menu9
with
  ZIPI_titulo "Puerto Espacial de Cadgel Meadows",
  ZIPI_item
    ZIPI_Otro12
    ZIPI_Otro13
;
ZIPI_Menu ZIPI_Menu10
with
  ZIPI_titulo "Solución (prohibido leer esto)",
  ZIPI_item
    ZIPI_Otro15
    ZIPI_Menu11
;
ZIPI_Menu ZIPI_Menu11
with
  ZIPI_titulo "Puerto Espacial de Cadgel Meadows",
  ZIPI_item
    ZIPI_Otro16
    ZIPI_Otro17
    ZIPI_Otro18
    ZIPI_Otro19
;
ZIPI_Pista ZIPI_Pista0
with
  ZIPI_titulo "¿Qué tengo que hacer en la batalla de Half-Axe?",
  ZIPI_pistas
    "Examina todo lo que te rodea (eso siempre)."
    "Pero, básicamente, lo que tienes que hacer es entorpecer el avance del enemigo."
    "Quizás los enormes árboles te puedan servir para tu propósito..."
    "... tienes dos formas de utilizarlos: con tu sable láser o con la Fuerza."
    "~CORTA EL ARBOL CON EL SABLE~."
;
ZIPI_Pista ZIPI_Pista1
with
  ZIPI_titulo "¿Cómo salgo del agujero?",
  ZIPI_pistas
    "Recuerda, eres un jedi..."
    "Un jedi tiene poderes que le hacen llegar donde para otros es imposible..."
    "Prueba a SALTAR."
;
ZIPI_Pista ZIPI_Pista2
with
  ZIPI_titulo "¿Cómo saco a Bomo del agujero?",
  ZIPI_pistas
    "No puedes dejar a Bomo abandonado en el agujero."
    "Nuevamente, recuerda que eres un jedi..."
    "La Fuerza le permite a un jedi controlar objetos en el aire."
    "~LEVITAR A BOMO~."
;
ZIPI_Pista ZIPI_Pista3
with
  ZIPI_titulo "¿Cómo entro a Cadgel Meadows?",
  ZIPI_pistas
    "Hay varias formas de entrar al puerto espacial."
    "Un muro rodea el puerto espacial. La entrada principal está en el lado este del recinto."
    "La entrada está protegida por soldados imperiales..."
    "...pero tu eres un jedi!!"
    "Puedes usar la Fuerza para evitar los muros."
    "También puedes usar la Fuerza para engañar a los soldados."
    "También puedes entrar de una forma más mundana."
    "Si te disfrazas de soldado imperial y usas a Bomo como prisionero, podrían dejarte entrar."
;
ZIPI_Pista ZIPI_Pista4
with
  ZIPI_titulo "¿Y una vez dentro?",
  ZIPI_pistas
    "Tienes que averiguar dónde tienen a los nosaurianos."
    "El comandante al mando dispone de toda la información."
    "Aunque también las tripulaciones de las naves retenidas podrían saber algo."
;
ZIPI_Pista ZIPI_Pista5
with
  ZIPI_titulo "¿Cómo hablo con el comandante al mando?",
  ZIPI_pistas
    "Tienes que entrar al cuartel de mando."
    "Sólo los soldados imperiales pueden entrar al cuartel de mando."
    "Tendrás que disfrazarte de soldado clon para poder entrar..."
    "...sin embargo yendo solo el Comandante Vill no te recibirá."
    "Debes usar a Bomo como prisionero para llamar la antención del Comandante Vill."
;
ZIPI_Pista ZIPI_Pista6
with
  ZIPI_titulo "¿Cómo hablo con la tripulación del alguna nave?",
  ZIPI_pistas
    "Sólo hay una nave a la que podrás entrar."
    "Prueba en alguno de los hangares de Cadgel Meadows..."
    "...concretamente en el hangar Este."
    "Se trata de la Uhumele."
    "Sin embargo no podrás entrar hasta que te deshagas de la mujer que vigila la entrada a la nave."
    "Hablando con ella no conseguirás nada... y menos aún si cree que eres un soldado imperial."
    "Tendrás que entrar violentamente."
;
ZIPI_Pista ZIPI_Pista7
with
  ZIPI_titulo "¿Dónde están los nosaurianos?",
  ZIPI_pistas
    "Debes hablar con el capitán de la Uhumele."
    "Sin embargo, no le ha gustado mucho que entréis por la fuerza en su nave."
    "Debes ganarte su confianza para que responda a tus preguntas."
    "Si le hablas de que sois supervivientes de la batalla de Half-Axe, te lo ganarás."
    "O si le decís que buscáis a la familia de Bomo también."
;
ZIPI_Pista ZIPI_Pista8
with
  ZIPI_titulo "¿Ya sé donde tienen a los nosaurianos. ¿Y ahora??",
  ZIPI_pistas
    "Tendrás que salir del puerto espacial..."
    "...y para ello necesitarás una nave."
    "El capitán de la Uhumele está dispuesto a ayudar."
    "Sin embargo, los soldados imperiales tienen bloqueadas todas las naves..."
    "...y destruirán a cualquier nave que intente escapar."
;
ZIPI_Pista ZIPI_Pista9
with
  ZIPI_titulo "¿Cómo escapamos del bloqueo?",
  ZIPI_pistas
    "El capitán de la Uhumele tiene un plan."
    "Si todas las naves bloqueadas huyen a la vez, es imposible que los soldados imperiales disparen a todas."
    "Sin embargo hay una nave que colabora con los imperiales y os delataría en cuanto se entere del plan."
    "Se trata de la Valance."
    "Tendrás que destruir esa nave."
;
ZIPI_Pista ZIPI_Pista10
with
  ZIPI_titulo "Ya sé cómo escapar... ¿cómo continúo?",
  ZIPI_pistas
    "Tienes que destruir la Valance"
    "Necesitas una nave para atacarla."
    "Una nave de combate, un caza, es justo lo que necesitas."
    "Tienes que robar el caza que hay en el hangar norte."
    "Pero necesitas parecer un soldado clon para poder acercarte."
;
ZIPI_Pista ZIPI_Pista11
with
  ZIPI_titulo "¿Disfrazarme de soldado clon?",
  ZIPI_pistas
    "Necesitas un traje de soldado imperial."
    "Un traje de la Legión 501, concretamente."
    "Hay un soldado de la Legión 501 que patrulla por el exterior de Cadgel Meadows."
    "Si le atacas y le vences puedes ponerte su traje."
;
ZIPI_Pista ZIPI_Pista12
with
  ZIPI_titulo "¿Y ahora?",
  ZIPI_pistas
    "Súbete al caza."
    "Sobrevuela el hangar sur y localiza la Valance."
    "Abre fuego sobre la Valance"
    "~DISPARA A LA VALANCE~"
;
ZIPI_Otro ZIPI_Otro0
with
  ZIPI_titulo "¿Cómo funciona este sistema de pistas?",
  ZIPI_ejecutar [;
       print "^- Te puedes desplazar por los menús usando las flechas del cursor arriba y abajo. ";
       print "^- Para seleccionar una opción del menú, puedes pulsar las teclas ~Entrar~ o ~P~. ";
       print "^- Para volver al menú anterior, o salir del sistema de pistas, pulsa ~Q~. ";
       print "^- Cuando estés leyendo pistas, pulsa ~P~ para ver la pista siguiente (si es que ";
       print "hay más), o pulsa ~Q~ para retroceder a la pantalla anterior. ";
  ];
ZIPI_Otro ZIPI_Otro1
with
  ZIPI_titulo "Acciones y órdenes",
  ZIPI_ejecutar [;
       print "^EL ULTIMO JEDI es una aventura conversacional que te sumerge en el universo ";
       print "^de STAR WARS, donde tú eres el protagonista y con el que podrás interactuar ";
       print "^introduciendo órdenes con el teclado. ";
       print "^^";
       print "Dichas órdenes tienen una sintaxis típica de «VERBO» o «VERBO NOMBRE», aunque ";
       print "^pueden construirse órdenes mucho más complejas si fuese necesario. ";
       print "^^";
       print "Algunos ejemplos: ";
       print "^^";
       print "> COGE LA CAJA DE HERRAMIENTAS ";
       print "^> ABRE EL ARMARIO ";
       print "^> COGE EL TRAJE ROJO Y PONTELO ";
       print "^> SACA TODO DE DENTRO DEL ARMARIO ";
       print "^^";
       print "Los verbos se pueden escribir en imperativo («COGE») o infinitivo («COGER»), si bien ";
       print "se recomienda la primera opción, más que nada porque resulta más corta. Y los ";
       print "artículos («EL», «LA») se pueden poner, aunque no son necesarios. ";
       print "^^";
  ];
ZIPI_Otro ZIPI_Otro2
with
  ZIPI_titulo "Algunas acciones frecuentes",
  ZIPI_ejecutar [;
       print "^Las siguientes son algunas de las acciones que se utilizan de manera más frecuente en ";
       print "una aventura conversacional: ";
       print "^^";
       print "COGE tal . . . .: Coger el objeto 'tal'. ";
       print "^DEJA tal . . . .: Dejar el objeto 'tal'. ";
       print "^ABRE tal . . . .: Abrir 'tal' (normalmente una puerta o algún recipiente cerrado). ";
       print "^CIERRA tal . . .: Cerrar 'tal' (normalmente una puerta o algún recipiente abierto). ";
       print "^METE tal EN cual: Meter el objeto 'tal' dentro de 'cual' (por ejemplo, una caja). ";
       print "^SACA tal DE cual: Sacar el objeto 'tal' de dentro de 'cual' (por ejemplo, una caja). ";
       print "^PONTE tal . . . : Ponerse el objeto 'tal' (normalmente una prenda de ropa). ";
       print "^QUITATE tal . . : Quitarse el objeto 'tal' (normalmente una prenda de ropa). ";
       print "^ENTRA . . . . . : Entrar dentro de algún sitio, posiblemente a través de una puerta. ";
       print "^SAL . . . . . . : Salir de algún sitio, posiblemente a través de una puerta. ";
       print "^EXAMINA tal (o ";
       print "^EX tal o X tal) : Describir el objeto 'tal' con detalle. ";
       print "^INVENTARIO (o I): Mostrar un listado con los objetos que posees actualmente. ";
  ];
ZIPI_Otro ZIPI_Otro3
with
  ZIPI_titulo "Moverse por el mundo",
  ZIPI_ejecutar [;
       print "^El mundo de EL ULTIMO JEDI está compuesto por multitud de localidades   ";
       print "interconectadas entre sí. Las salidas desde tu localidad actual se muestran siempre ";
       print "a continuación de la descripción de dicha localidad. Para moverte de una localidad ";
       print "a otra, simplemente teclea la salida correspondiente. ";
       print "^^";
       print "Por ejemplo: supongamos que tu localidad actual tiene como salidas «norte» y ";
       print "«afuera». En ese caso, para moverte hacia la localidad situada al norte de la ";
       print "actual, puedes teclear las órdenes NORTE, VETE AL NORTE, IR AL NORTE o simplemente ";
       print "N. Y para salir fuera, puedes teclear SAL, SALIR o FUERA. Los puntos cardinales se ";
       print "pueden abreviar a N, S, E, O, NE, SE, NO y SO. ";
  ];
ZIPI_Otro ZIPI_Otro4
with
  ZIPI_titulo "Interactuar con otros personajes del juego",
  ZIPI_ejecutar [;
       print "^A veces, será necesario enviar órdenes a algún personaje (por ejemplo, a Bomo). ";
       print "^En tal caso, deberás indicar el nombre del personaje seguido de una coma, ";
       print "y a continuación la orden que deseas enviarle: ";
       print "^^";
       print "> BOMO, VE AL NORTE ";
       print "^> BOMO, SIGUEME ";
       print "^^";
       print "Para hablar con un personaje, o bien preguntarle algo, se usa la misma sintaxis: ";
       print "^^";
       print "> BOMO, HABLAME DE TI ";
       print "^> BOMO, QUE OPINAS SOBRE LOS JEDIS ";
       print "^^";
       print "Aunque también puedes usar esta sintaxis: ";
       print "^^";
       print ">PREGUNTA AL COMANDANTE POR EL PRISIONERO ";
       print "^>HABLA AL COMANDANTE SOBRE EL PRISIONERO ";
       print "^^";
       print "Saber trabajar conjuntamente con los personajes es crucial para alcanzar el éxito ";
       print "^en esta aventura. ";
  ];
ZIPI_Otro ZIPI_Otro5
with
  ZIPI_titulo "Algunos comandos útiles",
  ZIPI_ejecutar [;
       print "^SONIDO SI/NO . . . . : Activar o desactivar todos los efectos sonoros. ";
       print "^SONIDO FONDO SI/NO . : Activar o desactivar el sonido de fondo. ";
       print "^SALIDAS (o X) . . . .: Mostrar las salidas visibles en la localidad actual. ";
       print "^SAVE (o GUARDAR) . . : Almacenar la situación actual en un archivo externo, para ";
       print "^                       poder volver a él en cualquier momento. ";
       print "^LOAD (o RECUPERAR) . : Recuperar una situación previamente guardada con SAVE o ";
       print "^                       GUARDAR. ";
       print "^AYUDA . . . . . . . .: Por si alguna vez te encuentras atascado. ";
       print "^REINICIAR . . . . . .: Volver a empezar desde el principio. ";
       print "^ACABAR (o FIN) . . . : Salir de la aventura (cuidado: no guarda la situación actual).^ ";
  ];
ZIPI_Otro ZIPI_Otro6
with
  ZIPI_titulo "Consejos y ayudas",
  ZIPI_ejecutar [;
       print "^- Examina todo lo que encuentres. Varias veces si hace falta. ";
       print "^- Recoge todos los objetos que puedas; podrían serte de utilidad. ";
       print "^- Habla con los demás personajes de la aventura. A veces te darán pistas útiles. ";
       print "^- El azar es parte de esta aventura. Tenlo en cuenta a la hora de llevar a cabo ";
       print "^  determinadas acciones. ";
       print "^- Graba frecuentemente tu situación con la orden GUARDAR. Nunca se sabe lo que ";
       print "^  puedes encontrarte tras esa esquina... ";
       print "^- Si te encuentras con algún fallo o no sabes cómo avanzar, puedes plantear tus ";
       print "^  dudas en el foro del CAAD o en joruiru@@64gmail.com.^ ";
  ];
ZIPI_Otro ZIPI_Otro7
with
  ZIPI_titulo "",
  ZIPI_ejecutar [;
       rtrue;
  ];
ZIPI_Otro ZIPI_Otro8
with
  ZIPI_titulo "",
  ZIPI_ejecutar [;
       rtrue;
  ];
ZIPI_Otro ZIPI_Otro9
with
  ZIPI_titulo "Poderes de la Fuerza",
  ZIPI_ejecutar [;
       print "^Las siguientes son algunos de los poderes que proporciona la Fuerza a un jedi: ";
       print "^^";
       print "LEVITA tal . . . . .: Mantienes el objeto 'tal' suspendido en el aire. ";
       print "^SIENTE tal . . . . .: Puedes sentir la Fuerza fluir sobre el objeto 'tal' (normalmente ";
       print "algún ser vivo). ";
       print "^CONCENTRATE EN tal .: Puedes sentir la Fuerza fluir sobre el objeto 'tal' (normalmente ";
       print "algún ser vivo). ";
       print "^ENGAÑAR A tal. . . .: Confundes la mente de 'tal' (normalmente un ser inteligente). ";
       print "^PERSUADIR A tal. . .: Confundes la mente de 'tal' (normalmente un ser inteligente). ";
       print "^SANA A tal . . . . .: Curas las heridas de 'tal'. ";
       print "^ATURDE A tal . . . .: Lanzas una ráfaga a distancia para tumbar a 'tal'. ";
       print "^EMPUJA A tal . . . .: Lanzas una ráfaga a distancia para tumbar a 'tal'. ";
       print "^SALTA . . . . . . . : Saltas alturas imposibles. ";
  ];
ZIPI_Otro ZIPI_Otro10
with
  ZIPI_titulo "",
  ZIPI_ejecutar [;
       rtrue;
  ];
ZIPI_Otro ZIPI_Otro11
with
  ZIPI_titulo "El Paso de Half-Axe",
  ZIPI_ejecutar [;
       print "^^";
       font off;
       print "              +----------+  +----------+                        ^";
       print "              |   CIMA   |--|  CAMINO  | -> (al exterior de Cadgel Meadows) ^";
       print "              +----------+  +----------+                        ^";
       print "                    |        ^";
       print "                    |^";
       print "              +----------+^";
       print "              |  LADERA  | <- (agujero)^";
       print "              +----------+^";
       print "                    |^";
       print "                    |^";
       print "              +----------+ ^";
       print "              |   PASO   | (localidad de inicio)^";
       print "              +----------+ ^";
       print "                  ^";
       font on;
  ];
ZIPI_Otro ZIPI_Otro12
with
  ZIPI_titulo "Exterior de Cadgel Meadows",
  ZIPI_ejecutar [;
       print "^^";
       font off;
       print "                     ^";
       print "                                 +------------+^";
       print "                                 | EXT. NORTE |^";
       print "                                 +------------+^";
       print "                                /    (muro)    @@92 ^";
       print "                  +------------+                +-----------+^";
       print "   (al camino) <- | EXT. OESTE |(muro)          | EXT. ESTE | (Acceso Hangar Este)^";
       print "                  +------------+                +-----------+^";
       print "                                @@92    (muro)    /  ^";
       print "                                 +------------+^";
       print "                                 |  EXT. SUR  |^";
       print "                                 +------------+^";
       font on;
  ];
ZIPI_Otro ZIPI_Otro13
with
  ZIPI_titulo "Interior de Cadgel Meadows",
  ZIPI_ejecutar [;
       print "^^";
       font off;
       print "^";
       print "                          (caza V-wing)^";
       print "                        +--------------+    +---------------+^";
       print "                        | HANGAR NORTE |  > | CUARTEL MANDO |^";
       print "                        +--------------+    +---------------+^";
       print "                               |         ^";
       print "    +--------------+    +--------------+    +---------------+^";
       print "    | HANGAR OESTE | -- |    PISTA -   | -- |  HANGAR ESTE  | (Acceso al Exterior)^";
       print "    +--------------+    +--------------+    +---------------+^";
       print "           @@92/                  |    ^";
       print "    +--------------+    +--------------+ ^";
       print "    | INT. UHUMELE |    |  HANGAR SUR  |^";
       print "    +--------------+    +--------------+ ^";
       print "^";
       font on;
  ];
ZIPI_Otro ZIPI_Otro14
with
  ZIPI_titulo "",
  ZIPI_ejecutar [;
       rtrue;
  ];
ZIPI_Otro ZIPI_Otro15
with
  ZIPI_titulo "En el Paso de Half-Axe",
  ZIPI_ejecutar [;
       print "^Corta uno de los enormes árboles con el sable láser (también puedes arrancarlo usando ";
       print "la Fuerza). ";
       print "^Vete al norte, a la ladera. Allí vuelve a intentar hacer lo mismo con otro árbol, pero ";
       print "los imperiales se te adelantarán y dispararán, haciendo que caigas al agujero. ";
       print "^Para salir del agujero debes saltar al exterior. ";
       print "^Saca a Bomo haciéndolo levitar con la Fuerza. ";
       print "^Ve al norte y luego hacia el oeste, hasta que llegues al exterior de Cadgel Meadows. ";
  ];
ZIPI_Otro ZIPI_Otro16
with
  ZIPI_titulo "Exterior de Cadgel Meadows",
  ZIPI_ejecutar [;
       print "^Antes de entrar al complejo debes encontrar al soldado que hace guardia por el ";
       print "exterior. Va dando vueltas al complejo en esta dirección: este-norte-oeste-sur, por ";
       print "lo que yendo en dirección contraria te lo encontrarás. ";
       print "^Ataca al guardia y róbale su traja de soldado clon. ";
       print "^Ve a la parte este del complejo y engaña a los guardias para que te dejen entrar cuando ";
       print "te den el alto. ";
  ];
ZIPI_Otro ZIPI_Otro17
with
  ZIPI_titulo "Entrando al cuartel de mando",
  ZIPI_ejecutar [;
       print "^El cuartel de mando está en el hangar norte. ";
       print "^Para poder entrar necesitas ir disfrazado de soldado clon y usar a Bomo como prisionero. ";
       print "^Pregúntale al comandante qué hacer con el prisionero, para que te cuente dónde se han ";
       print "llevado al resto. ";
       print "^Sal y vuelve al hangar este. ";
  ];
ZIPI_Otro ZIPI_Otro18
with
  ZIPI_titulo "En la Uhumele",
  ZIPI_ejecutar [;
       print "^Para entrar en la Uhumele debes esperar a que se abra la rampa de acceso y salga Crys. ";
       print "^Debes ir sin el traje de clon, o si no Crys al verte cerrará la rampa y volverá dentro. ";
       print "^Con Crys fuera, debes atacarla para dejarla inconsciente y tener acceso libre al interior. ";
       print "^Dile al capitán de la Uhumele que venís de la batalla de Half-Axe, con lo que os ayudará. ";
       print "^Dile que necesitáis ir a Orbax IV en busca de la famila de Bomo. ";
       print "^Pregúntale por el plan para escapar del bloqueo en el puerto espacial ";
  ];
ZIPI_Otro ZIPI_Otro19
with
  ZIPI_titulo "La huida final",
  ZIPI_ejecutar [;
       print "^Debes ir al hangar norte a robar un caza V-wing. ";
       print "^Solo puedes acercarte al caza yendo disfrazado de clon. ";
       print "^Dentro del caza mueve la palanca de mando hacia arriba para despegar. ";
       print "^Mueve la palanca hacia delante para avanzar hasta la pista. ";
       print "^Mueve la palanca hacia delante para avanzar hasta el hangar sur. ";
       print "^Dispara a la Valance, para provocar el caos y que el resto de naves despeguen... ";
       print "^^";
       print "******** FIN ******** ";
       print "^^";
  ];
[ ZIPI_Empezar ;
!  ZIPI_InitGlk();
  BorrarPantalla();
  ZIPI_Intro();
!  barra_estado.numero_lineas = 26;
!  barra_estado.dibujar();
  ZIPI_RunMenu(ZIPI_Menu0);
!  barra_estado.numero_lineas = 1;
!  barra_estado.dibujar();
];
