// FUN_0062d120  0062d120

undefined4 __fastcall FUN_0062d120(int *param_1)

{
  if (param_1[0xba] != 0) {
    alSourceStop(param_1[0xba]);
    FUN_0062d690();
    alSourcei(param_1[0xba],0x1009,0);
    param_1[0xba] = 0;
    param_1[0xb9] = 0;
    param_1[0xb8] = 0;
    FUN_00684240(param_1 + 2);
  }
  if (*param_1 != 0) {
    fclose((FILE *)*param_1);
  }
  return 1;
}

