// FUN_00631c30  00631c30

void __fastcall FUN_00631c30(int *param_1)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  size_t sVar4;
  char *_Source;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_28;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab93d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f2f70(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (param_1[0x16] == 0) {
    uVar2 = (**(code **)(*param_1 + 0x10c))();
    pvVar3 = operator_new(-(uint)((int)((ulonglong)uVar2 * 4 >> 0x20) != 0) |
                          (uint)((ulonglong)uVar2 * 4));
    param_1[0x16] = (int)pvVar3;
  }
  DAT_00795fbb = 0;
  DAT_00795fbc = 0;
  DAT_00795fbd = DAT_00795f94;
  (**(code **)(**(int **)(DAT_007960d8 + 0x14) + 0x10))("PlayURL",&PTR_006b27f8,&DAT_007953c8,100);
  sVar4 = strlen(&DAT_007953c8);
  if (sVar4 == 0) {
    _Source = (char *)(**(code **)(*param_1 + 0x15c))();
    strcpy(&DAT_007953c8,_Source);
  }
  iVar5 = FUN_00607960("SkipMovie",0);
  DAT_007960c5 = iVar5 == 0;
  iVar5 = FUN_00607960("InternetOrCDRoom",1);
  DAT_007960c4 = iVar5 != 0;
  iVar5 = FUN_00607960("SpecialDebugMode",0);
  DAT_007960c6 = iVar5 != 0;
  iVar5 = FUN_00607960("ShowAllHands",0);
  DAT_007960c7 = iVar5 != 0;
  iVar5 = FUN_00607960("ForceAllHumans",0);
  DAT_007960c8 = iVar5 != 0;
  iVar5 = FUN_00607960("ForceAllAIs",0);
  DAT_007960c9 = iVar5 != 0;
  iVar5 = FUN_00607960("NoThinkTime",0);
  DAT_007960ca = iVar5 != 0;
  for (local_14 = 0; iVar5 = (**(code **)(*DAT_0162ee84 + 0x10c))(), local_14 < iVar5;
      local_14 = local_14 + 1) {
    uVar6 = (**(code **)(*param_1 + 0x31c))();
    *(undefined4 *)(param_1[0x16] + local_14 * 4) = uVar6;
    FUN_0063a3e0(local_14,0);
  }
  FUN_00666650();
  FUN_00636fe0();
  cVar1 = (**(code **)(*param_1 + 0xdc))();
  if (cVar1 != '\0') {
    FUN_00634220();
    FUN_00634ac0();
  }
  pvVar3 = operator_new(0x1c);
  local_8 = 0;
  if (pvVar3 == (void *)0x0) {
    local_28 = 0;
  }
  else {
    local_28 = FUN_00607da0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(DAT_007960d8 + 8) = local_28;
  if ((DAT_007960c5 != '\0') && (cVar1 = (**(code **)(*DAT_0162ee84 + 0xb4))(), cVar1 != '\0')) {
    (**(code **)(*param_1 + 0x34))(0x3e9);
    ExceptionList = local_10;
    return;
  }
  uVar6 = (**(code **)(*DAT_0162ee84 + 600))();
  (**(code **)(*param_1 + 0x34))(uVar6);
  ExceptionList = local_10;
  return;
}

