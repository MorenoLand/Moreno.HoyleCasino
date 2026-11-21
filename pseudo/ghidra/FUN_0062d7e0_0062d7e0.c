// FUN_0062d7e0  0062d7e0

uint __thiscall FUN_0062d7e0(uint param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x2e8) == 0) {
    param_1 = param_1 & 0xffffff00;
  }
  else {
    alSourcef(*(undefined4 *)(param_1 + 0x2e8),0x100a,param_2);
    param_1 = FUN_0062d710();
  }
  return param_1;
}

