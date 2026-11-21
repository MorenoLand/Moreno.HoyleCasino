// FUN_005f6e50  005f6e50

void __thiscall FUN_005f6e50(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  FUN_005f5110(param_2,param_3);
  uVar2 = FUN_005f5590();
  uVar2 = FUN_005f5550(uVar2);
  (**(code **)(*param_1 + 0x78))(uVar2);
  cVar1 = FUN_005f54a0();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

