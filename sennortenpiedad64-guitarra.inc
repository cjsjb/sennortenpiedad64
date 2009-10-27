\context RhythmicStaff = "Guitarra" << 
	\set Staff.instrumentName = "Guitarra"
	\set Staff.shortInstrumentName = "G."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "guitarra" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key a \minor
		a 4. a 4 a 8 a 4 a a  |
		e 4. e 4 e 8 e 4 e e  |
		c 4. c 4 c 8 c 4 c c  |
		d 4. d 4 d 8 d 4 d d  |
		%% 5
		d 8 d d d 4 d 8 d 4 d d  |
		a 4. a 4 a 8 a 4 a a  |
		e 4. e 4 e 8 e 4 e e  |
		c 4. c 4 c 8 c 4 c c  |
		d 4. d 4 d 8 d 4 d d  |
		%% 10
		d 8 d d d 4 d 8 d 4 d d  |
		a 4. a 4 a 8 a 4 a a  |
		e 4. e 4 e 8 e 4 e e  |
		c 4. c 4 c 8 c 4 c c  |
		f 4. f 4 f 8 f 4 f f  |
		%% 15
		f 8 f f f 4 f 8 f 4 f f  |
		d 4. d 4 d 8 d 4 d d  |
		e 4. e 4 e 8 e 4 e e  |
		a 4. a 4 a 8 a 4 a a  |
		a 8 a a a 4 a 8 a 4 a a  |
		%% 20
		f 4. f 4 f 8 f 4 f f  |
		f 8 f f f 4 f 8 f 4 f f  |
		e 4. e 4 e 8 e 4 e e  |
		e 8 e e e 4 e 8 e 4 e e  |
		d 4. d 4 d 8 d 4 d d  |
		%% 25
		e 4. e 4 e 8 e 4 e e  |
		a 4. a 4 a 8 a 4 a a  |
		a 8 a a a 4 a 8 a 4 a a  |
		f 4. f 4 f 8 f 4 f f  |
		f 8 f f f 4 f 8 f 4 f f  |
		%% 30
		e 4. e 4 e 8 e 4 e e  |
		e 8 e e e 4 e 8 e 4 e e  |
		a 4. a 4 a 8 a 4 a a  |
		e 4. e 4 e 8 e 4 e e  |
		c 4. c 4 c 8 c 4 c c  |
		%% 35
		d 4. d 4 d 8 d 4 d d  |
		d 8 d d d 4 d 8 d 4 d d  |
		a 4. a 4 a 8 a 4 a a  |
		e 4. e 4 e 8 e 4 e e  |
		c 4. c 4 c 8 c 4 c c  |
		%% 40
		f 4. f 4 f 8 f 4 f f  |
		f 8 f f f 4 f 8 f 4 f f  |
		c 4. c 4 c 8 c 4 c c  |
		c 1.  |
		\bar "|."
	} % Voice
>> % Staff ends
