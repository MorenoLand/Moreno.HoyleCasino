// FUN_005e8230  005e8230

void FUN_005e8230(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 *local_48;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9a0b;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar3 = (int *)FUN_0063aac0(uVar2);
  if (*piVar3 == 1) {
    (&DAT_007949e8)[param_2 * 0xb8] = 0;
    *(undefined4 *)(&DAT_00794980 + param_2 * 0xb8) = 0xffffffff;
    *(undefined4 *)(&DAT_007949ec + param_2 * 0xb8) =
         *(undefined4 *)(*(int *)(*(int *)(DAT_007947e0 + 0x58) + param_1 * 4) + 0xc);
    *(undefined4 *)(&DAT_007949f0 + param_2 * 0xb8) =
         *(undefined4 *)(*(int *)(*(int *)(DAT_007947e0 + 0x58) + param_1 * 4) + 8);
  }
  else {
    (&DAT_007949e8)[param_2 * 0xb8] = 1;
    piVar3 = (int *)FUN_0063aac0(uVar2);
    if (*piVar3 == 2) {
      uVar6 = 1;
      uVar4 = FUN_004842b0(1);
      uVar4 = FUN_006394c0(uVar4,uVar6);
      *(undefined4 *)(&DAT_00794980 + param_2 * 0xb8) = uVar4;
    }
    else {
      *(undefined4 *)(&DAT_00794980 + param_2 * 0xb8) = 0xffffffff;
      pvVar5 = operator_new(200);
      local_8 = 0;
      if (pvVar5 == (void *)0x0) {
        local_48 = (undefined4 *)0x0;
      }
      else {
        local_48 = (undefined4 *)FUN_006640c0();
      }
      local_8 = 0xffffffff;
      uVar4 = FUN_0057a470();
      cVar1 = FUN_00664300(uVar4);
      if (cVar1 == '\0') {
        FUN_005e9f20("false","..\\Casino\\hof.cpp",0x29f);
      }
      else {
        memcpy(&DAT_0079499c + param_2 * 0xb8,local_48 + 4,0x4c);
      }
      if (local_48 != (undefined4 *)0x0) {
        (**(code **)*local_48)(1);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

