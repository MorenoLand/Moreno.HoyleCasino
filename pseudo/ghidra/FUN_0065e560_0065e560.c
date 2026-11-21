// FUN_0065e560  0065e560

void FUN_0065e560(int param_1)

{
  undefined4 extraout_var;
  
  FUN_0065c660(param_1);
  if (param_1 < 0x3e9) {
    if (param_1 == 1000) {
      FUN_0065f940(1000,extraout_var);
      (**(code **)(*DAT_0162ee84 + 0x34))(0x3eb);
    }
    else {
      switch(param_1) {
      case 0:
        FUN_0065f940(param_1,extraout_var);
        break;
      case 1:
        FUN_0065fae0();
        break;
      case 2:
        FUN_0065e670();
        break;
      case 3:
        FUN_0065ed10();
        break;
      case 5:
        FUN_0065f940(param_1,extraout_var);
        (**(code **)(*DAT_0162ee84 + 0x34))(0x3ea);
        break;
      case 6:
        FUN_0060cce0(1);
      }
    }
  }
  return;
}

