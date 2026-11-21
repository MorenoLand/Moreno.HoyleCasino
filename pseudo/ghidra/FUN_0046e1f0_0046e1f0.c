// FUN_0046e1f0  0046e1f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046e1f0(char param_1,undefined4 param_2)

{
  undefined2 uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined2 extraout_var;
  float10 fVar5;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069f7f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar4 = FUN_0047e420(DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_004c7c40(local_18);
  local_8 = 0;
  uVar1 = FUN_00498100();
  *(undefined2 *)(&DAT_00791030 + iVar4 * 2) = uVar1;
  (&DAT_007912e0)[iVar4] = 0;
  if (param_1 != '\0') {
    sVar2 = FUN_00498920();
    if (-1 < sVar2) {
      fVar5 = (float10)FUN_0046dc80(1,param_2);
      sVar3 = FUN_004e15d0(CONCAT22(extraout_var,sVar2));
      if ((double)fVar5 < (double)(int)sVar3 / _DAT_006bc208) {
        *(short *)(&DAT_00791030 + iVar4 * 2) = sVar2;
        (&DAT_007912e0)[iVar4] = 1;
      }
    }
  }
  local_8 = 0xffffffff;
  FUN_00484470();
  ExceptionList = local_10;
  return;
}

