pipeline{
  agent any
  stages{
    stage('Build'){
      steps{
        sh 'gcc -o main main.c'
      }
    }
    stage('Run'){
      steps{
        sh './main'
      }
    }
  }
}
