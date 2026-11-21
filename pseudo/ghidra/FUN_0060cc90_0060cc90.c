// FUN_0060cc90  0060cc90

HRESULT FUN_0060cc90(undefined4 param_1,LPVOID *param_2)

{
  HRESULT local_8;
  
  local_8 = CoCreateInstance((IID *)&DAT_006d8280,(LPUNKNOWN)0x0,1,(IID *)&DAT_006d8290,param_2);
  if (-1 < local_8) {
    local_8 = (**(code **)(*(int *)*param_2 + 0x48))(*param_2,0);
  }
  return local_8;
}

