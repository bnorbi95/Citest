pipeline{
  agent any
  stages{
    stage('Checkout'){
      steps{
        checkout scm
      }
    }
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
