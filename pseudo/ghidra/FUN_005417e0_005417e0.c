// FUN_005417e0  005417e0

undefined4 __thiscall FUN_005417e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00462ba0(param_1 + 200 + param_2 * 6,3,0);
  iVar2 = FUN_00462ba0(param_1 + 0xe0,3,0);
  if ((iVar1 == 4) && ((iVar2 == 6 || (iVar2 == 5)))) {
    uVar3 = 1;
  }
  else if ((iVar2 == 4) && ((iVar1 == 6 || (iVar1 == 5)))) {
    uVar3 = 0;
  }
  else if ((iVar1 == 5) && (iVar2 == 6)) {
    uVar3 = 1;
  }
  else if ((iVar2 == 5) && (iVar1 == 6)) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00462da0(param_1 + 200 + param_2 * 6,param_1 + 0xe0,3);
  }
  return uVar3;
}

