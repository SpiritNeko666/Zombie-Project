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

  class Weapon{
  -name : string
  +isGun()bool
  +isBat()bool

  }
  class Supplies{
  -amount : int
  +addSupplies(amount : int) void
  +useSupplies(amount : int) void
  +isEmpty() bool
  }

  class Camp{
  -survivors : int
  +addSurvivor(amount : int) void
  }

  class Map{
    -width : int
    -height : int
    -char : map
    +draw() void
    +canMove() bool
  
  }

  class Player{
  -name : string
  -stats : int
  -gear : string
  +getX(xPos : int) void
  +getY(yPos : int) void
  +move() bool

  }
  Player*--Survivor
  Map*--Player
  Map*--Zombies
  Camp*--Zombies
  Camp*--Survivor
  Survivor*-- Weapon
  Camp*-- Supplies
