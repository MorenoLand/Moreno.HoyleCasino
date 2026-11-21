// FUN_0066ea40  0066ea40

void __thiscall FUN_0066ea40(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined1 local_174 [256];
  char local_74 [104];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  cVar1 = (**(code **)(*DAT_0162ee84 + 0x33c))(0xffffffff);
  if (cVar1 != '\0') {
    cVar1 = FUN_005f54c0();
    if (cVar1 != '\0') {
      iVar2 = (**(code **)(*param_1 + 0x54))();
      iVar2 = (**(code **)(*param_1 + 0x4c))(iVar2 + 0x65);
      (**(code **)(*(int *)param_1[0x7c] + 0x44))(iVar2 + 0x67);
      (**(code **)(*(int *)param_1[0x7c] + 0x74))();
    }
    cVar1 = FUN_005f54c0();
    if (cVar1 != '\0') {
      iVar2 = (**(code **)(*param_1 + 0x54))();
      iVar2 = (**(code **)(*param_1 + 0x4c))(iVar2 + 0x4a);
      (**(code **)(*(int *)param_1[0x7d] + 0x44))(iVar2 + 0x77);
      (**(code **)(*(int *)param_1[0x7d] + 0x74))();
    }
    iVar2 = (**(code **)(*param_1 + 0x54))();
    iVar2 = (**(code **)(*param_1 + 0x4c))(iVar2 + 0x17c);
    (**(code **)(*(int *)param_1[0x81] + 0x44))(iVar2 + 0x186);
    (**(code **)(*(int *)param_1[0x81] + 0x74))();
    for (local_8 = param_2; local_8 < 10; local_8 = local_8 + 1) {
      sprintf(local_74,"%s",param_1 + local_8 * 0x26 + 0x84);
      (**(code **)(*(int *)param_1[local_8 + 0x5e] + 0xb4))(local_74);
      if (param_2 == 0) {
        iVar2 = (**(code **)(*param_1 + 0x54))();
        iVar2 = (**(code **)(*param_1 + 0x4c))(iVar2 + 0x65);
        (**(code **)(*(int *)param_1[local_8 + 0x5e] + 0x44))(iVar2 + 0xe2);
      }
      else {
        iVar5 = local_8 + -1;
        iVar2 = (**(code **)(*param_1 + 0x54))();
        iVar2 = (**(code **)(*param_1 + 0x4c))(iVar5 * 0x18 + 0xa2 + iVar2);
        (**(code **)(*(int *)param_1[local_8 + 0x5e] + 0x44))(iVar2 + 0xa6);
      }
      (**(code **)(*(int *)param_1[local_8 + 0x5e] + 0x74))();
      uVar3 = FUN_005f3bf0();
      piVar4 = (int *)(**(code **)(*DAT_0162ee84 + 0xe0))(uVar3);
      (**(code **)(*piVar4 + 0xd8))(param_1[local_8 * 0x26 + 0x91],local_174);
      (**(code **)(*(int *)param_1[local_8 + 0x68] + 0xb4))(local_174);
      if (param_2 == 0) {
        iVar2 = (**(code **)(*param_1 + 0x54))();
        iVar2 = (**(code **)(*param_1 + 0x4c))(iVar2 + 0x65);
        (**(code **)(*(int *)param_1[local_8 + 0x68] + 0x44))(iVar2 + 0xe2);
      }
      else {
        iVar5 = local_8 + -1;
        iVar2 = (**(code **)(*param_1 + 0x54))();
        iVar2 = (**(code **)(*param_1 + 0x4c))(iVar5 * 0x18 + 0xa2 + iVar2);
        (**(code **)(*(int *)param_1[local_8 + 0x68] + 0x44))(iVar2 + 0xa6);
      }
      (**(code **)(*(int *)param_1[local_8 + 0x68] + 0x74))();
      sprintf(local_74,"%d",local_8 + 1);
      if (0 < local_8) {
        (**(code **)(*(int *)param_1[local_8 + 0x72] + 0xb4))(local_74);
        iVar5 = local_8 + -1;
        iVar2 = (**(code **)(*param_1 + 0x54))();
        iVar2 = (**(code **)(*param_1 + 0x4c))(iVar5 * 0x18 + 0xa2 + iVar2);
        (**(code **)(*(int *)param_1[local_8 + 0x72] + 0x44))(iVar2 + 0x82);
        (**(code **)(*(int *)param_1[local_8 + 0x72] + 0x74))();
      }
      if (param_2 == 0) break;
    }
    if (param_2 == 0) {
      iVar2 = *(int *)(param_1[0x83] + 0x20);
      FUN_006464d0(1,0);
      *(undefined1 *)(iVar2 + 0x28) = 0;
      *(undefined1 *)(iVar2 + 0x29) = 0;
      iVar2 = (**(code **)(*param_1 + 0x54))();
      iVar2 = iVar2 + 0x4a;
      iVar5 = (**(code **)(*param_1 + 0x4c))(iVar2);
      FUN_00646150(iVar5 + 0x77,iVar2);
      FUN_006464d0(0,0);
    }
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

