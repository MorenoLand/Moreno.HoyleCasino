// FUN_005556a0  005556a0

undefined4 FUN_005556a0(void)

{
  undefined4 uVar1;
  
  if (DAT_00793420 == 0) {
    uVar1 = 1;
  }
  else if ((*(int *)(DAT_00793420 + 0x14) == 1) && (*(int *)(*(int *)(DAT_0079341c + 4) + 4) == 0))
  {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

