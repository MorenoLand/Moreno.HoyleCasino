// FUN_00420b60  00420b60

void FUN_00420b60(void)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined4 uVar3;
  
  iVar2 = FUN_005eb220();
  if (iVar2 == 3) {
    uVar3 = extraout_var;
    iVar2 = FUN_005f5400();
    piVar1 = *(int **)(DAT_00790360 + 0x44 + iVar2 * 4);
    (**(code **)(*piVar1 + 0xb0))(1,piVar1,uVar3);
  }
  return;
}

