// FUN_00601180  00601180

void __fastcall FUN_00601180(int *param_1)

{
  char cVar1;
  undefined3 extraout_var;
  undefined3 uVar2;
  char local_5;
  
  if ((char)param_1[6] != '\0') {
    cVar1 = (**(code **)(*param_1 + 0xc))();
    if (cVar1 != '\0') {
      if (param_1[9] == 0) {
        local_5 = FUN_005f54c0();
        uVar2 = extraout_var;
      }
      else {
        cVar1 = FUN_005eb610();
        local_5 = cVar1 != -1;
        uVar2 = 0;
      }
      if (local_5 == '\0') {
        if (param_1[9] == 0) {
          (**(code **)(*(int *)param_1[1] + 0x70))();
        }
        else {
          FUN_005eb5d0(CONCAT31(uVar2,(char)param_1[9]));
        }
      }
      else {
        if (param_1[9] == 0) {
          (**(code **)(*(int *)param_1[1] + 0x74))();
        }
        else {
          FUN_005eb5d0(0xff);
        }
        if (*(char *)((int)param_1 + 0x21) == '\0') {
          param_1[7] = param_1[7] + -1;
        }
      }
    }
    if ((*(char *)((int)param_1 + 0x21) == '\0') && (param_1[7] < 1)) {
      (**(code **)(*param_1 + 0x14))();
    }
  }
  return;
}

