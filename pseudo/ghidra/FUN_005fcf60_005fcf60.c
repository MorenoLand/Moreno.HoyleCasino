// FUN_005fcf60  005fcf60

void __fastcall FUN_005fcf60(int *param_1)

{
  char cVar1;
  
  FUN_00602550();
  FUN_005f2840(param_1[0x7b]);
  cVar1 = FUN_006026d0();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0xd8))(0);
  }
  if (param_1[0x7e] != 0) {
    (**(code **)(*(int *)param_1[0x7e] + 0x70))();
  }
  if (param_1[0x7d] != 0) {
    (**(code **)(*(int *)param_1[0x7d] + 0x70))();
  }
  if (param_1[0x80] != 0) {
    (**(code **)(*(int *)param_1[0x80] + 0x70))();
  }
  return;
}

