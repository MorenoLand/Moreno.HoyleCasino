// FUN_00427600  00427600

undefined1 __thiscall FUN_00427600(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_10;
  
  uVar3 = 0;
  uVar1 = FUN_00426370(param_2);
  iVar2 = FUN_00462ba0(param_1 + 0x6c + param_2 * 10,uVar1,uVar3);
  if ((*(char *)(param_1 + param_2 + 0xd8) == '\0') || (iVar2 != 10)) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}

