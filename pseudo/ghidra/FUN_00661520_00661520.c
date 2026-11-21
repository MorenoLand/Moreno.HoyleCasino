// FUN_00661520  00661520

void __fastcall FUN_00661520(int *param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 *local_a0;
  undefined4 *local_98;
  int local_78;
  undefined1 local_74 [28];
  int local_58;
  int local_54;
  int *local_50;
  int local_4c;
  undefined1 local_48 [28];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  void *local_1c;
  undefined4 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac9b9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0064ce60(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (DAT_00795f95 != '\0') {
    FUN_00662e40();
    (**(code **)(*DAT_0162ee84 + 900))();
  }
  param_1[0x20] = DAT_0162ee84[5];
  FUN_005f83d0(0x30d5f4,0);
  iVar2 = FUN_005f9ce0(0,0,0x30d5fa,0,0,1000,0,0xff,0);
  param_1[0x21] = iVar2;
  iVar2 = FUN_005fa5b0(0,0,"dang monkey",0x4d,200,100,0,0,1000,0x24,0xffffffff);
  param_1[0x22] = iVar2;
  FUN_006044b0(0x20584554,0x30d5f7,1);
  FUN_006044b0(0x20584554,0x30d5f9,1);
  FUN_006044b0(0x20584554,0x30d5fa,1);
  pvVar3 = operator_new(0x178);
  local_8 = 0;
  if (pvVar3 == (void *)0x0) {
    local_98 = (undefined4 *)0x0;
  }
  else {
    local_98 = (undefined4 *)FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  local_18 = local_98;
  FUN_005eae80(0x30d5f5,0,0,0,0xffffffff);
  iVar2 = FUN_005eb130();
  param_1[0x25] = iVar2 + 1;
  if (local_18 != (undefined4 *)0x0) {
    (**(code **)*local_18)(1);
  }
  local_20 = 0;
  local_1c = (void *)0x0;
  local_2c = 0x30d5f5;
  local_28 = 0;
  local_24 = 0;
  local_14 = 0;
  FUN_00662ef0();
  FUN_00663060(&DAT_00770ad8);
  FUN_00662f30(&local_2c);
  local_20 = FUN_005fa3c0(0,0,1,0x67,0,0,0,local_14 * 4 + 2,0,0xffffffff,0xffffffff,0xffffffff,
                          0xffffffff);
  local_1c = CPropertySection::Get((CPropertySection *)param_1[0x20],1,(ulong *)0x67);
  FUN_00625c30(1);
  local_4c = 0;
  while (iVar2 = (**(code **)(*DAT_0162ee84 + 0xec))(), local_4c < iVar2) {
    local_50 = (int *)(**(code **)(*DAT_0162ee84 + 0xe0))(local_4c);
    if ((local_50 != (int *)0x0) && (local_54 = (**(code **)(*local_50 + 0x6c))(), local_54 != 0)) {
      for (local_58 = 0; *(int *)(local_54 + local_58 * 0x10) != -1; local_58 = local_58 + 1) {
        if (*(int *)(local_54 + local_58 * 0x10) != -2) {
          FUN_00662360(*(undefined4 *)(local_54 + local_58 * 0x10),local_58 * 0x10 + local_54,
                       local_48,local_14,local_1c);
        }
      }
    }
    local_4c = local_4c + 1;
  }
  uVar4 = FUN_005f9ce0(0,0,0x30d5fa,0,0,local_14 * 4 + 3,0,0xff,0);
  FUN_005ff5a0(uVar4);
  FUN_00662ef0();
  FUN_00663060(&DAT_00770ab8);
  FUN_00662f30(&local_2c);
  for (local_78 = 0; *(int *)(&DAT_00770b80 + local_78 * 4) != -1; local_78 = local_78 + 1) {
    FUN_00662360(*(undefined4 *)(&DAT_00770b80 + local_78 * 4),0,local_74,local_14,local_1c);
  }
  local_a0 = operator_new(0x20);
  local_8 = 1;
  if (local_a0 == (undefined4 *)0x0) {
    local_a0 = (undefined4 *)0x0;
  }
  else {
    FUN_005fc0d0(0);
    *local_a0 = NavHideSubscreenScript::vftable;
  }
  local_8 = 0xffffffff;
  FUN_005f1b70(local_a0);
  FUN_006064e0(local_14);
  FUN_00662ce0();
  FUN_00625e00(1);
  cVar1 = FUN_00636760();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x16c))(1,0,0xffffffff,0xffffffff,0);
  }
  ExceptionList = local_10;
  return;
}

