// FUN_00672930  00672930

void FUN_00672930(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int local_10;
  int local_8;
  
  local_10 = 0x10;
  local_8 = 0x3f;
  if (0 < param_3) {
    local_10 = param_3 * 0x10;
  }
  if (0 < param_2) {
    piVar1 = (int *)FUN_005fb550(param_2 + -1);
    local_8 = (**(code **)(*piVar1 + 0x54))();
    FUN_005fb550(param_2 + -1);
    iVar2 = FUN_005f5590();
    local_8 = local_8 + (iVar2 - ((int)(iVar2 + (iVar2 >> 0x1f & 0xfU)) >> 4));
  }
  FUN_005fa5b0(0,0xffffffff,&DAT_006e132c,0x1f,5,0x10,0xe3,local_8,1,5,0xffffffff);
  FUN_005fa5b0(0,param_2,param_1,0x1f,0xba,local_10,0xeb,local_8,1,5,0xffffffff);
  if (param_3 == 0) {
    FUN_005fb550(param_2);
    iVar2 = FUN_005eee80();
    iVar2 = iVar2 << 4;
    FUN_005fb550(param_2);
    FUN_005eccb0(iVar2);
  }
  return;
}

