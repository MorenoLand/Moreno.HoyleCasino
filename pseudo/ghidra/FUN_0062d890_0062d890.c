// FUN_0062d890  0062d890

uint __thiscall FUN_0062d890(uint param_1,char param_2)

{
  if (*(int *)(param_1 + 0x2e8) == 0) {
    param_1 = param_1 & 0xffffff00;
  }
  else {
    if (param_2 == '\0') {
      alSourcePlay(*(undefined4 *)(param_1 + 0x2e8));
    }
    else {
      alSourcePause(*(undefined4 *)(param_1 + 0x2e8));
    }
    param_1 = FUN_0062d710();
  }
  return param_1;
}

