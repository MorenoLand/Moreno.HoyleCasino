// FUN_005e6bc0  005e6bc0

void __thiscall FUN_005e6bc0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined1 local_190 [104];
  char local_128 [260];
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a99b2;
  local_10 = ExceptionList;
  local_24 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar1 = param_2 + 1U & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  uVar1 = -(uint)(uVar1 != 0) & 0xfffffebf;
  local_20 = uVar1 + 0x1bb;
  local_1c = *(int *)(&DAT_0075ebf0 + param_2 * 4);
  local_18 = 0;
  local_14 = param_2 * 10 + 100;
  FUN_005f9ce0(0,param_2 + 2,0x30f0f1,uVar1 + 0x1a8,local_1c + -0x10,1,0,0xff,0);
  iVar2 = FUN_005e75f0(param_2);
  uVar13 = 0xffffffff;
  uVar12 = 0x30;
  uVar11 = 2;
  iVar7 = local_1c + 5;
  uVar10 = 0xf;
  uVar9 = 0xb4;
  uVar8 = 0x1f;
  iVar4 = local_20;
  uVar3 = FUN_005e7610(param_2);
  FUN_005fa5b0(0,local_14,uVar3,uVar8,uVar9,uVar10,iVar4,iVar7,uVar11,uVar12,uVar13);
  local_18 = (-(uint)(*(char *)(iVar2 + 0x54) != '\0') & 0xfffffffa) + 0x1b;
  FUN_005fa5b0(0,local_14 + 1,iVar2 + 4,0x1f,0xb4,0xf,local_20,local_1c + local_18,2,0x30,0xffffffff
              );
  local_18 = (-(uint)(*(char *)(iVar2 + 0x54) != '\0') & 0xfffffffa) + 0x29;
  iVar4 = FUN_005e7630(param_2);
  if (iVar4 == 0) {
    FUN_0064c8d0(*(undefined4 *)(iVar2 + 0x48),*(undefined4 *)(iVar2 + 0x4c),local_128,1,1,1);
  }
  else {
    sprintf(local_128,"%d",*(undefined4 *)(iVar2 + 0x50));
  }
  FUN_005fa5b0(0,local_14 + 2,local_128,0x1f,0xb4,0xf,local_20,local_1c + local_18,2,0x30,0xffffffff
              );
  if (*(char *)(iVar2 + 0x54) != '\0') {
    FUN_005e7650(param_2,local_190);
    FUN_005fa5b0(0,local_14 + 3,local_190,0x44,0xb4,0xf,local_20,local_1c + 0x32,2,0x30,0xffffffff);
  }
  FUN_005fa5b0(0,local_14 + 4,iVar2 + 0x38,0x2f,0xb4,0xf,local_20,local_1c + 0x41,2,0x30,0xffffffff)
  ;
  if (*(char *)(iVar2 + 0xac) == '\0') {
    puVar6 = (undefined4 *)FUN_0063aac0();
    *puVar6 = 1;
    FUN_0063b490(*(undefined4 *)(iVar2 + 0xb4));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x238) + param_2 * 4) + 0xc) =
         *(undefined4 *)(iVar2 + 0xb0);
    strcpy((char *)(*(int *)(*(int *)(param_1 + 0x238) + param_2 * 4) + 0x10),(char *)&PTR_006b27f8)
    ;
    pvVar5 = operator_new(0x60);
    local_8 = 1;
    if (pvVar5 == (void *)0x0) {
      local_1c8 = 0;
    }
    else {
      local_1c8 = FUN_006454f0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x238) + param_2 * 4) + 0x20) = local_1c8;
    FUN_00645820(*(undefined4 *)(*(int *)(param_1 + 0x238) + param_2 * 4),param_1,0,0,0);
    FUN_00646150(*(undefined4 *)(&DAT_0075eba0 + param_2 * 4),
                 *(undefined4 *)(&DAT_0075ebc8 + param_2 * 4));
    FUN_00646380(5);
    iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x238) + param_2 * 4) + 0x20);
    FUN_006464d0(1,0);
    *(undefined1 *)(iVar4 + 0x28) = 0;
    *(undefined1 *)(iVar4 + 0x29) = 0;
    FUN_006464d0(0,0);
  }
  else if (*(int *)(iVar2 + 0x44) < 0) {
    if (*(int *)(param_1 + 0x1c0 + param_2 * 4) == 0) {
      pvVar5 = operator_new(200);
      local_8 = 0;
      if (pvVar5 == (void *)0x0) {
        local_1c4 = 0;
      }
      else {
        local_1c4 = FUN_006640c0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1c0 + param_2 * 4) = local_1c4;
      FUN_00664200(param_1,0);
      FUN_006643f0(*(undefined4 *)(&DAT_0075eba0 + param_2 * 4),
                   *(undefined4 *)(&DAT_0075ebc8 + param_2 * 4));
      FUN_00664480(2);
    }
  }
  else {
    uVar3 = FUN_005f9ce0(0,local_14 + 3,*(undefined4 *)(iVar2 + 0x44),
                         *(undefined4 *)(&DAT_0075eba0 + param_2 * 4),
                         *(undefined4 *)(&DAT_0075ebc8 + param_2 * 4),0x14,0,0xff,0);
    *(undefined4 *)(param_1 + 0x1e8 + param_2 * 4) = uVar3;
    uVar3 = FUN_005f9ce0(0,local_14 + 4,*(undefined4 *)(iVar2 + 0x44),
                         *(undefined4 *)(&DAT_0075eba0 + param_2 * 4),
                         *(undefined4 *)(&DAT_0075ebc8 + param_2 * 4),0x28,0,0xff,0);
    *(undefined4 *)(param_1 + 0x210 + param_2 * 4) = uVar3;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffffc);
  return;
}

