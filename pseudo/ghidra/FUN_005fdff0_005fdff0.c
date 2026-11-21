// FUN_005fdff0  005fdff0

void __thiscall FUN_005fdff0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_78;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  char local_4c;
  undefined1 local_48 [52];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa6cc;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  piVar2 = (int *)FUN_005ff060(param_3);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*DAT_015e55e4 + 0x48))(param_2,&local_58,uVar1);
    FUN_005f53e0(local_58);
    uVar3 = (**(code **)(*DAT_015e55e8 + 0x14))(local_54);
    (**(code **)(*piVar2 + 0xe0))(uVar3);
    piVar2[0x7b] = local_50;
    if (piVar2[0x7d] != 0) {
      if ((undefined4 *)piVar2[0x7d] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar2[0x7d])(1);
      }
      piVar2[0x7d] = 0;
    }
    if (local_50 != -1) {
      pvVar4 = operator_new(0x178);
      local_8 = 0;
      if (pvVar4 == (void *)0x0) {
        local_78 = 0;
      }
      else {
        local_78 = FUN_005eaaf0();
      }
      local_8 = 0xffffffff;
      piVar2[0x7d] = local_78;
      *(undefined4 *)(piVar2[0x7d] + 4) = param_1;
      uVar8 = 0xffffffff;
      uVar7 = 2;
      uVar6 = 0;
      uVar5 = 0;
      uVar3 = (**(code **)(*DAT_015e55e8 + 0x60))(0,0,2,0xffffffff);
      FUN_005eae80(uVar3,uVar5,uVar6,uVar7,uVar8);
    }
    if (local_4c == '\0') {
      FUN_005fd730(&PTR_006b27f8);
    }
    else {
      FUN_005fe770(local_4c,local_48);
      FUN_005fd730(local_48);
    }
    FUN_005fdd10();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

