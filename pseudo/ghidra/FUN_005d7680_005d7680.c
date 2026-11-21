// FUN_005d7680  005d7680

void __thiscall FUN_005d7680(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  FUN_005ee710(param_2);
  iVar2 = (**(code **)(*param_1 + 0x54))();
  iVar2 = (**(code **)(*param_1 + 0x4c))(iVar2 + 0x11);
  (**(code **)(*(int *)param_1[0x61] + 0x44))(iVar2 + 6);
  iVar2 = FUN_005f53c0();
  (**(code **)(*(int *)param_1[0x61] + 0x6c))(iVar2 + 1);
  cVar1 = FUN_005f54a0();
  if (cVar1 != '\0') {
    (**(code **)(*(int *)param_1[0x61] + 0x74))();
  }
  FUN_005ee710(param_3);
  iVar2 = (**(code **)(*param_1 + 0x54))();
  iVar2 = (**(code **)(*param_1 + 0x4c))(iVar2 + 0x22);
  (**(code **)(*(int *)param_1[0x62] + 0x44))(iVar2 + 6);
  iVar2 = FUN_005f53c0();
  (**(code **)(*(int *)param_1[0x62] + 0x6c))(iVar2 + 1);
  cVar1 = FUN_005f54a0();
  if (cVar1 != '\0') {
    (**(code **)(*(int *)param_1[0x62] + 0x74))();
  }
  return;
}

