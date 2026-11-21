// FUN_00662950  00662950

void __thiscall FUN_00662950(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char local_42c [1000];
  uint local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  undefined1 local_34 [4];
  undefined4 local_30;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_44 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  FUN_00650360(param_2);
  if ((*(int *)(param_2 + 0x18) == 3) && (iVar2 = FUN_005f3fe0(), iVar2 == 0)) {
    if ((param_1[0x23] != 0) && (iVar2 = FUN_005fb300(param_1[0x23]), iVar2 != 0)) {
      piVar3 = (int *)FUN_005fb300(param_1[0x23]);
      cVar1 = (**(code **)(*piVar3 + 0x84))(param_2);
      if (cVar1 != '\0') goto LAB_00662cc3;
    }
    local_14 = FUN_005f8d90();
    local_c = FUN_0060c9a0();
    for (local_10 = 0; local_10 < local_c; local_10 = local_10 + 1) {
      local_8 = (int *)FUN_0060ca40(local_10);
      cVar1 = FUN_005f5600();
      if ((cVar1 == '\0') && (cVar1 = (**(code **)(*local_8 + 0x84))(param_2), cVar1 != '\0')) {
        local_18 = FUN_005f5400();
        if (local_18 < 0) {
          local_18 = -local_18;
        }
        if (0x66 < local_18) {
          iVar2 = FUN_005f5400();
          param_1[0x23] = iVar2;
          (**(code **)(*(int *)param_1[0x21] + 0x70))();
          local_24 = 0;
          local_20 = 0;
          local_1c = 0;
          local_38 = 0;
          goto LAB_00662b0e;
        }
      }
    }
  }
  goto LAB_00662cc3;
LAB_00662b0e:
  if (*(int *)(&DAT_0075dba0 + local_38 * 0x10) == 0) goto LAB_00662b4f;
  if (*(int *)(&DAT_0075dba0 + local_38 * 0x10) == local_18) {
    iVar2 = local_38 * 0x10;
    local_24 = *(int *)(&DAT_0075dba4 + iVar2);
    local_20 = *(undefined4 *)(&DAT_0075dba8 + iVar2);
    local_1c = *(undefined4 *)(&DAT_0075dbac + iVar2);
    goto LAB_00662b4f;
  }
  local_38 = local_38 + 1;
  goto LAB_00662b0e;
LAB_00662b4f:
  if (local_24 == 0) {
    local_40 = FUN_005fb4c0(0x67);
    local_3c = FUN_00606490();
    local_24 = (-(uint)(local_3c != 0) & 100) + 0x30d658 + (local_18 + -3200000) / 1000;
  }
  if (local_24 != 0) {
    FUN_005eaf00(local_24);
    FUN_005eb000(local_20);
    (**(code **)(*(int *)param_1[0x21] + 0xb0))(local_1c);
    (**(code **)(*(int *)param_1[0x21] + 0x74))();
  }
  cVar1 = (**(code **)(*param_1 + 0x48))(local_18,local_34);
  if (cVar1 != '\0') {
    sprintf(local_42c,"%s_INFO",local_30);
    FUN_0062fde0("Hover over %s (%d)\n",local_42c,local_18);
    uVar4 = FUN_00630f40(local_42c);
    (**(code **)(*(int *)param_1[0x22] + 0xb4))(uVar4);
    (**(code **)(*(int *)param_1[0x22] + 0x74))();
  }
LAB_00662cc3:
  __security_check_cookie(local_44 ^ (uint)&stack0xfffffffc);
  return;
}

