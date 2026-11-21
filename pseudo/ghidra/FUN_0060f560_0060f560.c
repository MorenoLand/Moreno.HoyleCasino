// FUN_0060f560  0060f560

void __thiscall
FUN_0060f560(int *param_1,short param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  longlong lVar1;
  char cVar2;
  undefined2 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 local_28;
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aae4e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f5cc0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  (**(code **)(*param_1 + 0x44))(param_4,param_5);
  (**(code **)(*param_1 + 0x6c))(param_6);
  FUN_005f53e0(param_7);
  param_1[0x62] = 0;
  if (param_2 < 1) {
    *(undefined2 *)(param_1 + 0x61) = 1;
  }
  else {
    *(short *)(param_1 + 0x61) = param_2;
  }
  lVar1 = (ulonglong)(uint)(int)(short)param_1[0x61] * 4;
  pvVar4 = operator_new(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
  param_1[99] = (int)pvVar4;
  for (local_14 = 0; local_14 < (short)param_1[0x61]; local_14 = local_14 + 1) {
    pvVar4 = operator_new(0x178);
    local_8 = 0;
    if (pvVar4 == (void *)0x0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1[99] + local_14 * 4) = local_28;
    FUN_005eaf00(param_3);
    (**(code **)(**(int **)(param_1[99] + local_14 * 4) + 0xb0))(0x14);
    (**(code **)(**(int **)(param_1[99] + local_14 * 4) + 0x40))();
    uVar5 = FUN_005f53c0();
    (**(code **)(**(int **)(param_1[99] + local_14 * 4) + 0x6c))(uVar5);
    uVar5 = FUN_005f5400();
    FUN_005f53e0(uVar5);
    cVar2 = FUN_005f54c0();
    if (cVar2 == '\0') {
      (**(code **)(**(int **)(param_1[99] + local_14 * 4) + 0x74))();
    }
    else {
      (**(code **)(**(int **)(param_1[99] + local_14 * 4) + 0x70))();
    }
  }
  (**(code **)(**(int **)param_1[99] + 0xb0))(0);
  uVar3 = FUN_005f5550();
  *(undefined2 *)((int)param_1 + 0x186) = uVar3;
  uVar5 = FUN_005f5590();
  (**(code **)(*param_1 + 0x78))
            ((int)*(short *)((int)param_1 + 0x186) * (int)(short)param_1[0x61],uVar5);
  (**(code **)(*param_1 + 0x44))(param_1[0x55],param_1[0x56]);
  ExceptionList = local_10;
  return;
}

