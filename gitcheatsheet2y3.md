# Resumen Capitulo 2

1. git init: crea un subdirectorio nuevo llamado .git
2. git add: especificar que archivos quieres controlar, rastrear un archivo 
3. git commit: confirmar los cambios
   - git commit --amend: volver a hacer la confirmación
4. git clone: obtener una copia de un repositorio git existente
5. git status: determinar que archivos estan en que estado
6. git diff: ver en que ha cambiado exactamente un archivo
7. git config: configurar el archivo o repositorio
8. git rm: elimina el archivo de tu directorio de trabajo
9. git mv file_from file_to: cambiar un ael nombre de un archivo
10. git log: mirar atras para ver que modificaciones se han llevado a cabo
    - git log -p: diferencias en cada confirmacion
    - git log -2: diferencias en las ultimas dos confirmaciones 
    - git log --stat: imprime tras cada confirmación una lista de archivos modificados
    - git log --pretty=format: modifica el formato de la salida
      - %H: Hash de la confirmación
      - %h: Hash de la confirmación abreviado
      - %P: Hashes de las confirmaciones padre
      - %p: Hashes de las confirmaciones padre abreviados
      - %T: Hash del árbol
      - %t: Hash del árbol abreviado
      - %an: Nombre del autor
      - %ae: Direccion de correo del autor
      - %ad: Fecha de autoría
      - %ar: Fecha de autoría relativa
      - %cn: Nombre del confirmador
      - %cd: Fecha de confirmación
      - %cr: Fecha de confirmación relativa
      - %ce: Direccion de correo del confirmador
      - %s: asunto
11. git reset: para deshacer la preparacion de un archivo
12. git checkout:Para saltar de una rama a otra 
13. git remote: ver qué repositorios remotos tienes configurados
    - git remote -v: muestra la URL asociada a cada repositorio remoto
    - git remote show origin: ver más información acerca de un repositorio remoto en particular
    - git remote rename: renombrar una referencia a un repositorio remoto
14. git fetch (remote name): para recuperar datos de tus repositorios remotos puedes
15. git push master origin: enviar un archivo a un repositorio remoto.
16. git pull: unirá los cambios a la rama maestra del remoto después de haber recuperado todas las referencias remotas.
17. git tag: Listar las etiquetas disponibles
    - git tag -a: Crear una etiqueta anotada
    - git tag -v(tag name): Para verificar una etiqueta firmada
18. git show: Puedes ver los datos de la etiqueta junto con la confirmación que fue etiquetada
19. git last: puedes ver la última confirmación fácilmente

# Resumen Capitulo 3

1. git branch: solamente crea una nueva rama
   - git branch --no-mergered: Para mostrar todas las ramas que contienen trabajos sin fusionar aún
   - git branch -d: borrar
   - git branch -d client: eliminar cliente
   - git branch -d server: eliminar servidor
2. git checkout: Para saltar de una rama a otra
3. git merge: realizar las pruebas oportunas, asegurarte que la solución es correcta, e incorporar los cambios a la rama master para ponerlos en producción.
4. git mergetool: arrancará la correspondiente herramienta de visualización y te permirá ir resolviendo conflictos con ella.
5. Proyectos muy grandes suelen tener una rama denominada "propuestas".
6. Las ramas remotas funcionan como marcadores, para recordarte en qué estado se encontraban tus repositorios remotos la última vez que conectaste con ellos.
7. git fetch origin: Para sincronizarse
   - git fetch teamone: recuperar todo el contenido del servidor que tu no tenias.
8. git push(nombreremoto): (nombre) : borrar la rama remota 
9. git rebase: puedes agarrar todos los cambios confirmados en una rama, y reaplicarlos sobre otra.
   - git rebase --onto: agarra los cambios del cliente que no estan en server y los aplica  a la rama principal.