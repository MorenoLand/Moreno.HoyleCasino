// FUN_0062f990  0062f990

void __fastcall FUN_0062f990(undefined4 *param_1)

{
  *param_1 = TList<StringManagerBase::StringPair,EqVal>::vftable;
  if (param_1[2] != 0) {
    memset((void *)param_1[4],0,param_1[2] << 3);
    param_1[2] = 0;
  }
  if (param_1[3] != 0) {
    operator_delete((void *)param_1[4]);
  }
  return;
}

