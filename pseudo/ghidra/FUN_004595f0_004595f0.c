// FUN_004595f0  004595f0

void __fastcall FUN_004595f0(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069f0a6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *(int *)(DAT_00790738 + 0x104);
  cVar2 = FUN_0045f900(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (cVar2 == '\0') {
    cVar2 = FUN_00461320(iVar1);
    if (cVar2 == '\0') {
      uVar3 = FUN_00630f40("SID_PAIGOWPOKER_ILLEGALLOWHAND",0);
      uVar3 = FUN_00630f40("SID_PAIGOWPOKER_2CANTBEAT5",uVar3);
      FUN_0062ff10(uVar3);
      *(undefined2 *)(DAT_00790738 + 0xa2 + iVar1 * 2) = 0;
      *(undefined2 *)(DAT_00790738 + 0xac + iVar1 * 2) = 0;
      FUN_0045b300();
    }
    else {
      cVar2 = FUN_0045c0a0(iVar1);
      if (cVar2 != '\0') {
        FUN_0045b300();
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x98) == 0) {
      pvVar4 = operator_new(0x1bc);
      local_8 = 0;
      if (pvVar4 == (void *)0x0) {
        local_24 = 0;
      }
      else {
        local_24 = FUN_0045ae90();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x98) = local_24;
      (**(code **)(**(int **)(param_1 + 0x98) + 0x3c))();
      FUN_005f7340(0,0xb9);
    }
    FUN_005f85d0();
  }
  ExceptionList = local_10;
  return;
}

