// FUN_0051fbe0  0051fbe0

void FUN_0051fbe0(void)

{
  int *piVar1;
  
  FUN_005f9ce0(0,0xe,0x30e79e,0,0,1,0,0xff,0);
  FUN_005f9ce0(0,0xf,0x30e79f,0,0,1,0,0xff,0);
  piVar1 = (int *)FUN_005fb2b0(0xe);
  (**(code **)(*piVar1 + 0x70))();
  piVar1 = (int *)FUN_005fb2b0(0xf);
  (**(code **)(*piVar1 + 0x70))();
  return;
}

