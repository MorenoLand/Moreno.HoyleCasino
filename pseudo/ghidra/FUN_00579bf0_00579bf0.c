// FUN_00579bf0  00579bf0

void FUN_00579bf0(void)

{
  int *piVar1;
  undefined4 extraout_var;
  undefined4 uVar2;
  undefined4 local_8;
  
  FUN_005f1ad0(0x311e38);
  if (DAT_00793570 < 0) {
    local_8 = 6;
  }
  else {
    local_8 = (&DAT_0074b060)[DAT_00793570 * 6];
  }
  uVar2 = extraout_var;
  FUN_005f9ce0(0,1,0x311e39,0,0,2000,0,0xff,0);
  piVar1 = (int *)FUN_005fb2b0(1);
  (**(code **)(*piVar1 + 0xb0))(local_8,piVar1,uVar2);
  return;
}

