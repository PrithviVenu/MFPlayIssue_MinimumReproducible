# MFPlayIssue_MinimumReproducible
1) Go to class.h file in MFPlay_MinimumReproducibleWinRT library
2) you will be able to see OnMediaPlayerEvent declared in MediaPlayerCallback
3) In that function rightclick on MFP_EVENT_HEADER property and click on go to definition, you will be able to go to its definition, but if you compile it will throw errors.
Where as if you change MFP_EVENT_HEADER to int or any other type compilation will succeed.
By this example we can say that MFP_EVENT_HEADER causes the issue (typedef struct inside mfplay.h)
