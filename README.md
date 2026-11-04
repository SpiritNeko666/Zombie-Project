# Zombie-Project
Zombie Final Project inspired by project zomboid
classDiagram
    class Survivor{
        -name : string
        -skill: int
        +addweapon(weapon : string) void
        +isAlive() bool
    }
    class Zombies{
    -amount : int
    +addZombie(zombies : int) void 
}

class weapon{
-name : string
+isGun()bool
+isBat()bool

}
class supplies{
-amount : int
+addSupplies(amount : int) void
+useSupplies(amount : int) void
+isEmpty() bool
}
class camp{
-survivors : int
+addSurvivor(amount : int) void
}
camp*--Survivor
Survivor*-- weapon
camp*-- supplies
