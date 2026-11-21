// FUN_005f0c50  005f0c50

void __fastcall FUN_005f0c50(int *param_1)

{
  if (param_1[5] == 0) {
    FUN_005f0bd0(1);
    (**(code **)(*param_1 + 8))(1,0x1e);
  }
  else if (param_1[5] == 1) {
    FUN_005f0bd0(0);
    (**(code **)(*param_1 + 8))(0,0x1e);
  }
  return;
}

