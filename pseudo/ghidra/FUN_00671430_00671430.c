// FUN_00671430  00671430

void __thiscall FUN_00671430(int *param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  char *_Str;
  size_t sVar3;
  int local_8;
  
  cVar2 = FUN_006378e0();
  if (cVar2 != '\0') {
    _Str = (char *)(**(code **)(*(int *)param_1[0x5f] + 0xb8))();
    if ((((param_2 == '\0') || (_Str == (char *)0x0)) || (sVar3 = strlen(_Str), sVar3 == 0)) ||
       (*(char *)(param_1[0x62] + 0x184) != '\0')) {
      (**(code **)(*param_1 + 0xb0))(0);
      bVar1 = false;
    }
    else {
      (**(code **)(*param_1 + 0xb0))(1);
      bVar1 = true;
    }
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      (**(code **)(*(int *)param_1[local_8 + 0x5e] + 0x44))(0x251,local_8 * -0xb + 0x245);
      if ((bVar1) || (local_8 == 0)) {
        (**(code **)(*(int *)param_1[local_8 + 0x5e] + 0x74))();
      }
      else {
        (**(code **)(*(int *)param_1[local_8 + 0x5e] + 0x70))();
      }
    }
    FUN_005eb570();
    return;
  }
  (**(code **)(*param_1 + 0x70))();
  return;
}

