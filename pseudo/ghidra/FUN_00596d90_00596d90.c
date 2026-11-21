// FUN_00596d90  00596d90

void __fastcall FUN_00596d90(int *param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  void *pvVar4;
  char cVar5;
  undefined4 local_54;
  int local_30;
  int local_2c;
  undefined2 local_20 [4];
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a73a9;
  local_10 = ExceptionList;
  local_18 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = param_1[5];
  if (iVar1 == 1) {
    FUN_00595790(local_18);
  }
  else if (iVar1 == 2) {
    local_14 = FUN_00597d30();
    if (*(char *)(DAT_007935a8 + local_14 + 0x112) == '\0') {
      FUN_005dcb00(local_14);
      piVar3 = (int *)FUN_0063aac0();
      if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        if (*(int *)(DAT_007935a4 + 0x80) == 0) {
          pvVar4 = operator_new(0x1f8);
          local_8 = 0;
          if (pvVar4 == (void *)0x0) {
            local_54 = 0;
          }
          else {
            local_54 = FUN_00593530();
          }
          local_8 = 0xffffffff;
          *(undefined4 *)(DAT_007935a4 + 0x80) = local_54;
          FUN_00593910(5,1);
          FUN_00593f00();
        }
        goto LAB_0059705d;
      }
      for (local_2c = 0; local_2c < 4; local_2c = local_2c + 1) {
        local_20[local_2c] = 0;
      }
      cVar5 = (local_14 == 4) + '\x05';
      FUN_00462a40(4,DAT_007935a8 + 200 + local_14 * 0xc,cVar5,local_20);
      local_30 = FUN_004629c0(DAT_007935a8 + 200 + local_14 * 0xc,cVar5,local_20,4);
      if (local_30 == -1) {
        FUN_005e9f20("index != -1","..\\Casino\\fourcardpokerroom.cpp",0x19c);
      }
      for (; local_30 < 5; local_30 = local_30 + 1) {
        *(undefined2 *)(DAT_007935a8 + 200 + local_14 * 0xc + local_30 * 2) =
             *(undefined2 *)(DAT_007935a8 + local_14 * 0xc + 0xca + local_30 * 2);
      }
      *(undefined2 *)(DAT_007935a8 + 0xd2 + local_14 * 0xc) = 0;
    }
    (**(code **)(**(int **)(DAT_007935a4 + 4) + 8))(1,0);
  }
  else if (iVar1 == 500) {
    FUN_00599210();
    (**(code **)(*param_1 + 4))(1);
    (**(code **)(*param_1 + 0x1c))(0);
  }
  else {
    FUN_005e9f20("false","..\\Casino\\fourcardpokerroom.cpp",0x1ac);
  }
LAB_0059705d:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

