// realloc  0068744a

void * __cdecl realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068744a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = realloc(_Memory,_NewSize);
  return pvVar1;
}

