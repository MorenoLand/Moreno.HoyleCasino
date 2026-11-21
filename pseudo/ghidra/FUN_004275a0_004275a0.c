// FUN_004275a0  004275a0

undefined4 __thiscall FUN_004275a0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  uVar1 = FUN_00426370(param_2);
  iVar2 = FUN_00462ba0(param_1 + 0x6c + param_2 * 10,uVar1,uVar3);
  if (((*(char *)(param_1 + param_2 + 0xd8) == '\0') || (iVar2 < 6)) || (9 < iVar2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

