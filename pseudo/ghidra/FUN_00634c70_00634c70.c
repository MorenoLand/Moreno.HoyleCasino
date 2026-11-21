// FUN_00634c70  00634c70

void __fastcall FUN_00634c70(int *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  char *_Source;
  undefined4 uVar6;
  undefined4 *puVar7;
  void *pvVar8;
  undefined4 *local_b0;
  int local_ac;
  undefined1 local_70 [15];
  char local_61;
  int local_60;
  undefined4 *local_5c;
  char local_58 [52];
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab9e0;
  local_10 = ExceptionList;
  local_24 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_61 = '\0';
  local_5c = (undefined4 *)0x0;
  cVar3 = (**(code **)(*param_1 + 0xdc))(local_24);
  if (cVar3 != '\0') {
    local_14 = 0;
    while (iVar4 = FUN_00636610(), local_14 < iVar4) {
      piVar5 = (int *)FUN_0063aac0();
      if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if ((bVar2) && (*(int *)(*(int *)(param_1[0x16] + local_14 * 4) + 0x24) != 0)) {
        local_20 = FUN_006703e0();
        iVar4 = FUN_0063aac0();
        strcpy(local_58,(char *)(iVar4 + 4));
        local_18 = 0;
        while ((local_18 < 10 &&
               (iVar4 = strcmp((char *)(local_18 * 0x98 + param_1[0x24]),local_58), iVar4 != 0))) {
          local_18 = local_18 + 1;
        }
        local_1c = 0;
LAB_00634e17:
        if ((local_1c <= local_18) && (local_1c < 10)) {
          if (local_20 <= *(int *)(param_1[0x24] + 0x34 + local_1c * 0x98)) goto LAB_00634e0e;
          if (local_18 == 10) {
            local_ac = 9;
          }
          else {
            local_ac = local_18;
          }
          for (local_60 = local_ac; local_1c < local_60; local_60 = local_60 + -1) {
            memcpy((void *)(local_60 * 0x98 + param_1[0x24]),
                   (void *)((local_60 + -1) * 0x98 + param_1[0x24]),0x98);
          }
          *(int *)(param_1[0x24] + 0x34 + local_1c * 0x98) = local_20;
          _Source = (char *)FUN_00639070(local_14);
          strcpy((char *)(local_1c * 0x98 + param_1[0x24]),_Source);
          *(undefined4 *)(param_1[0x24] + 0x3c + local_1c * 0x98) = 0xffffffff;
          piVar5 = (int *)FUN_0063aac0();
          if (*piVar5 == 2) {
            uVar6 = FUN_004842b0();
            puVar7 = (undefined4 *)(**(code **)(*DAT_0162ee84 + 0x1ec))(local_70,uVar6);
            puVar1 = (undefined4 *)(param_1[0x24] + 0x40 + local_1c * 0x98);
            *puVar1 = *puVar7;
            puVar1[1] = puVar7[1];
            puVar1[2] = puVar7[2];
            *(undefined4 *)(param_1[0x24] + 0x38 + local_1c * 0x98) = 2;
          }
          else {
            *(undefined4 *)(param_1[0x24] + 0x38 + local_1c * 0x98) = 3;
            if (local_5c == (undefined4 *)0x0) {
              pvVar8 = operator_new(200);
              local_8 = 0;
              if (pvVar8 == (void *)0x0) {
                local_b0 = (undefined4 *)0x0;
              }
              else {
                local_b0 = (undefined4 *)FUN_006640c0();
              }
              local_8 = 0xffffffff;
              local_5c = local_b0;
            }
            uVar6 = FUN_0057a470();
            cVar3 = FUN_00664300(uVar6);
            if (cVar3 == '\0') {
              FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0x62d);
            }
            else {
              memcpy((void *)(param_1[0x24] + 0x4c + local_1c * 0x98),local_5c + 4,0x4c);
            }
            if (local_5c != (undefined4 *)0x0) {
              (**(code **)*local_5c)(1);
            }
            local_5c = (undefined4 *)0x0;
          }
          local_61 = '\x01';
        }
      }
      local_14 = local_14 + 1;
    }
    if (local_61 != '\0') {
      FUN_00634b90();
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffffc);
  return;
LAB_00634e0e:
  local_1c = local_1c + 1;
  goto LAB_00634e17;
}

