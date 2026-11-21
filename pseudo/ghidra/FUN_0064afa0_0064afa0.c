// FUN_0064afa0  0064afa0

void __thiscall FUN_0064afa0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *_Str1;
  int iVar4;
  int iVar5;
  undefined **_Str2;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  *(undefined1 *)(param_1[0x61] + 0x5c) = 1;
  local_10 = (**(code **)(*DAT_0162ee80 + 0x194))((char)param_1[0x62]);
  if (param_2 != 0) {
    local_10 = param_2;
  }
  if (local_10 == 0) {
    (**(code **)(*param_1 + 0x70))();
  }
  else {
    FUN_005eaf00(local_10);
    FUN_005eb570();
    iVar2 = FUN_005f5550();
    if (iVar2 < 1) {
      uVar3 = FUN_005f5550();
      uVar3 = (**(code **)(*DAT_0162ee80 + 0x1a4))(uVar3);
      FUN_005ecc60(uVar3);
    }
    iVar2 = FUN_005f5550();
    if (iVar2 < 1) {
      uVar3 = FUN_005f5550();
      uVar3 = (**(code **)(*DAT_0162ee80 + 0x1a8))(uVar3);
      FUN_005ecc60(uVar3);
    }
    iVar2 = FUN_0063aac0();
    FUN_005ee710(iVar2 + 4);
    _Str2 = &PTR_006b27f8;
    _Str1 = (char *)(**(code **)(*(int *)param_1[99] + 0xb8))();
    iVar2 = strcmp(_Str1,(char *)_Str2);
    if (iVar2 == 0) {
      uVar3 = FUN_00630f40("SID_SHELL_OPENSEAT");
      FUN_005ee710(uVar3);
    }
    FUN_005ef310(0x30);
    FUN_005ef310(0x30);
    (**(code **)(*(int *)param_1[99] + 0x74))();
    (**(code **)(*(int *)param_1[100] + 0x74))();
    FUN_0064b3c0();
    cVar1 = (**(code **)(*DAT_0162ee84 + 0x33c))(0xffffffff);
    if ((cVar1 == '\0') || (param_2 != 0)) {
      (**(code **)(*(int *)param_1[0x65] + 0x70))();
    }
    else {
      uVar3 = FUN_005f3bf0(*(undefined4 *)(param_1[0x61] + 4),&local_18,&local_1c,&local_8,&local_14
                          );
      local_10 = (**(code **)(*DAT_0162ee80 + 0x1c0))(uVar3);
      if (local_10 == 0) {
        (**(code **)(*(int *)param_1[0x65] + 0x70))();
      }
      else {
        FUN_005eaf00(local_10);
        (**(code **)(*(int *)param_1[0x65] + 0xb0))(local_18);
        iVar2 = (**(code **)(*param_1 + 0x4c))();
        iVar4 = FUN_005f5550();
        iVar5 = FUN_005f8550();
        if (iVar2 + iVar4 / 2 < iVar5 / 2) {
          iVar2 = (**(code **)(*param_1 + 0x4c))();
          iVar4 = FUN_005f5550();
          iVar5 = FUN_005f5550();
          local_c = (iVar2 + iVar4) - (iVar5 + local_14);
        }
        else {
          local_c = (**(code **)(*param_1 + 0x4c))();
          local_c = local_c + local_8;
        }
        iVar2 = (**(code **)(*param_1 + 0x54))();
        iVar4 = FUN_005f5590();
        (**(code **)(*(int *)param_1[0x65] + 0x44))(local_c,(iVar2 + local_1c) - iVar4);
        (**(code **)(*(int *)param_1[0x65] + 0x74))();
        FUN_005eb5d0((-(uint)((char)param_1[0x62] != '\0') & 0xffffff41) + 0xff);
      }
    }
  }
  return;
}

