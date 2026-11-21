// FUN_005d60c0  005d60c0

/* WARNING: Removing unreachable block (ram,0x005d61b4) */
/* WARNING: Removing unreachable block (ram,0x005d6237) */
/* WARNING: Removing unreachable block (ram,0x005d6265) */
/* WARNING: Removing unreachable block (ram,0x005d6289) */
/* WARNING: Removing unreachable block (ram,0x005d6298) */
/* WARNING: Removing unreachable block (ram,0x005d62a7) */
/* WARNING: Removing unreachable block (ram,0x005d629e) */
/* WARNING: Removing unreachable block (ram,0x005d628f) */
/* WARNING: Removing unreachable block (ram,0x005d626b) */
/* WARNING: Removing unreachable block (ram,0x005d62ae) */
/* WARNING: Removing unreachable block (ram,0x005d62e4) */
/* WARNING: Removing unreachable block (ram,0x005d62d1) */
/* WARNING: Removing unreachable block (ram,0x005d62ee) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall FUN_005d60c0(int *param_1,int param_2,char param_3,char param_4)

{
  int iVar1;
  void *pvVar2;
  int local_a0;
  int local_7c;
  int local_78;
  undefined *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  char local_29;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9042;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_7c = 0;
  local_78 = 100000000;
  local_74 = &DAT_00989680;
  local_70 = 1000000;
  local_6c = 500000;
  local_68 = 100000;
  local_64 = 50000;
  local_60 = 25000;
  local_5c = 10000;
  local_58 = 5000;
  local_54 = 1000;
  local_50 = 500;
  local_4c = 100;
  local_48 = 0x32;
  local_44 = 0x19;
  local_40 = 10;
  local_3c = 5;
  local_38 = 1;
  local_34 = 0;
  local_30 = 100000000;
  local_24 = 0;
  local_14 = param_2;
  local_29 = param_3;
  if ((param_4 == '\0') &&
     (((**(code **)(*param_1 + 0x14))(DAT_00781870 ^ (uint)&stack0xfffffffc), local_14 != 0 ||
      (local_29 != '\0')))) {
    while (0 < local_30) {
      iVar1 = local_14 / local_30;
      local_14 = local_14 % local_30;
      for (local_1c = 0; local_1c < iVar1; local_1c = local_1c + 1) {
        local_20 = FUN_00646e40();
        local_20 = local_20 + 0x4b;
        local_18 = FUN_00646e70();
        local_18 = local_18 + 0x51;
        if ((local_7c < 6) || (0xf < local_7c)) {
          if (local_7c == 0x10) {
            local_28 = 0;
          }
          else if (local_7c < 3) {
            local_28 = 0x20;
          }
          else {
            local_28 = 0x1f;
          }
        }
        else {
          local_28 = FUN_0062fbf0(3);
          local_28 = (0x10 - local_7c) * 3 + -2 + local_28;
        }
        pvVar2 = operator_new(0x178);
        local_8 = 1;
        if (pvVar2 == (void *)0x0) {
          local_a0 = 0;
        }
        else {
          local_a0 = FUN_005eaaf0();
        }
        local_8 = 0xffffffff;
        param_1[local_24 + 0x109] = local_a0;
        FUN_005eae80(0xfaa,local_20,local_18 + local_24 * -2,local_24 + 0xc9,0xffffffff);
        (**(code **)(*(int *)param_1[local_24 + 0x109] + 0xb0))(local_28);
        (**(code **)(*(int *)param_1[local_24 + 0x109] + 0x74))();
        local_24 = local_24 + 1;
        if (local_24 == 0x1e) {
          ExceptionList = local_10;
          return;
        }
      }
      local_7c = local_7c + 1;
      local_30 = (&local_78)[local_7c];
    }
  }
  ExceptionList = local_10;
  return;
}

